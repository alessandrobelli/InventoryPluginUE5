# Inventory System Plugin for Unreal Engine 5

   ![Unreal Engine](https://img.shields.io/badge/Unreal%20Engine-5.6+-blue)
   ![License](https://img.shields.io/badge/License-MIT-green)
   ![C++](https://img.shields.io/badge/C%2B%2B-17-orange)

A multiplayer grid-based inventory system for Unreal Engine 5.6+ featuring fragment-based item composition, spatial grid UI with drag-drop, equipment management and network replication.

## Features

### Core Inventory System
- **Fragment-Based Item Architecture** - Modular item composition using `FInv_ItemFragment` system allowing flexible item definitions without class inheritance
- **Spatial Grid Layout** - Multi-slot items with configurable dimensions and grid padding
- **GameplayTag Identification** - Tag-based item identification and querying instead of hard-coded IDs
- **Stack Management** - Configurable max stack sizes with automatic stack merging
- **Item Categories** - Automatic categorization (Equippable, Consumable, Craftable) with category-specific grids
- **Weight System** - Automatic player movement speed adjustment based on total inventory weight
- **Server-Authoritative** - All inventory operations validated on server with FastArray replication

### Equipment System
- **Equipment Slots** - Support for multiple equipment slots (weapons, cloaks, masks, etc.)
- **Stat Modifiers** - Equipment items can apply stat bonuses via `FInv_EquipModifier`
- **Actor Spawning** - Equipment automatically spawns and attaches `AInv_EquipActor` to skeletal mesh sockets
- **Visual Feedback** - Equipment slots show currently equipped items in UI

### Consumable System
- **Consumable Effects** - Health/Mana potions with configurable restoration amounts
- **Consume Modifiers** - Extensible modifier system via `FInv_ConsumeModifier`
- **Stacking Support** - Consumables can be stackable with configurable limits

### UI System
- **Spatial Grid Widget** - Visual grid representation with multi-slot item support
- **Drag-Drop System** - Full drag-drop between inventory slots, equipment slots, and world
- **Item Hover Tooltips** - Detailed item information on mouse hover via `UInv_HoverItem`
- **Item Description Panel** - Stat display and item details via composite pattern widgets
- **Context Menus** - Right-click popup menus for split, drop, consume actions
- **HUD Integration** - Pickup notifications and status messages via `UInv_HUDWidget`
- **Composite Widget System** - Flexible UI composition using `UInv_CompositeBase` pattern

### Interaction System
- **Line Trace Pickup** - Configurable distance-based item detection
- **Highlight System** - Visual highlighting via `IInv_Highlightable` interface
- **Interactable Interface** - Generic interaction system via `IInv_Interactable`
- **Pickup Animations** - Optional pickup montages and sounds

### Network Features
- **Multiplayer Ready** - Full server-client replication using `FFastArraySerializer`
- **Optimized Serialization** - Efficient network bandwidth usage
- **RPC Support** - Server/client RPCs for all inventory operations
- **Delegate Events** - Comprehensive event system for UI updates (`OnItemAdded`, `OnItemRemoved`, `OnStackChange`, etc.)

## Installation

### Requirements
- Unreal Engine 5.6 or higher
- C++17 compiler (MSVC 2022 or later)
- Git (for version control)

### Step-by-Step Installation

1. **Clone or download this repository** into your project's `Plugins` folder:
   ```bash
   cd YourProject/Plugins
   git clone https://github.com/alessandrobelli/InventoryPluginUE5.git Inventory
   ```

2. **Add the plugin to your project's `.uproject` file**:
   ```json
   {
     "Plugins": [
       {
         "Name": "Inventory",
         "Enabled": true
       }
     ]
   }
   ```

3. **Add module dependency** to your game's `Build.cs` file:
   ```csharp
   PublicDependencyModuleNames.AddRange(new string[] {
       "Core", "CoreUObject", "Engine", "InputCore",
       "Inventory"  // Add this line
   });
   ```

4. **Regenerate project files** and **compile**:
   ```bash
   # Right-click .uproject → Generate Visual Studio project files
   # Open solution and build
   ```

5. **Enable the plugin** in Unreal Editor:
   - Edit → Plugins → Search "Inventory" → Enable → Restart Editor

## Usage

### Quick Start: Adding Inventory to Your Character

```cpp
// YourCharacter.h
#include "InventoryManagement/Components/Inv_InventoryComponent.h"
#include "EquipmentManagement/Components/Inv_EquipmentComponent.h"

UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Inventory")
UInv_InventoryComponent* InventoryComponent;

UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Equipment")
UInv_EquipmentComponent* EquipmentComponent;
```

```cpp
// YourCharacter.cpp (Constructor)
InventoryComponent = CreateDefaultSubobject<UInv_InventoryComponent>(TEXT("InventoryComponent"));
InventoryComponent->SetIsReplicatedByDefault(true);

EquipmentComponent = CreateDefaultSubobject<UInv_EquipmentComponent>(TEXT("EquipmentComponent"));
EquipmentComponent->SetOwningSkeletalMesh(GetMesh());
```

### Creating a Pickup Item

1. **Create a Blueprint Actor** inheriting from `AActor`
2. **Add Components**:
   - `StaticMeshComponent` for visuals
   - `UInv_ItemComponent` for inventory data
3. **Configure the Item Manifest** on `UInv_ItemComponent`:
   ```cpp
   // In Blueprint or C++
   ItemManifest.ItemCategory = EInv_ItemCategory::Equippable;
   ItemManifest.ItemType = FGameplayTag::RequestGameplayTag(FName("GameItems.Weapons.Sword"));

   // Add required fragments
   FInv_GridFragment GridFragment;
   GridFragment.GridSize = FIntPoint(2, 3);  // 2 wide, 3 tall
   GridFragment.GridPadding = 5.0f;
   ItemManifest.AddFragment(GridFragment);

   FInv_ImageFragment ImageFragment;
   ImageFragment.Icon = SwordIconTexture;
   ItemManifest.AddFragment(ImageFragment);

   FInv_TextFragment TextFragment;
   TextFragment.FragmentText = FText::FromString("Iron Sword");
   ItemManifest.AddFragment(TextFragment);

   FInv_WeightFragment WeightFragment;
   WeightFragment.Weight = 15;
   ItemManifest.AddFragment(WeightFragment);
   ```

### Creating an Equippable Weapon

1. **Create Equipment Actor** inheriting from `AInv_EquipActor`
2. **Add visual components** (StaticMesh or SkeletalMesh)
3. **Configure Equipment Fragment**:
   ```cpp
   FInv_EquipmentFragment EquipFragment;
   EquipFragment.EquipActorClass = AMyWeaponActor::StaticClass();
   EquipFragment.SocketAttachPoint = FName("hand_rSocket");
   EquipFragment.EquipmentType = FGameplayTag::RequestGameplayTag(FName("Equipment.Weapon"));

   // Add stat modifiers
   FInv_StrengthModifier StrengthMod;
   StrengthMod.StrengthBonus = 10;
   EquipFragment.EquipModifiers.Add(FInstancedStruct::Make(StrengthMod));

   ItemManifest.AddFragment(EquipFragment);
   ```

### Querying Inventory in C++

```cpp
// Find item by GameplayTag
FGameplayTag KeyTag = FGameplayTag::RequestGameplayTag(FName("GameItems.Keys.GoldenKey"));
UInv_InventoryItem* Item = InventoryComponent->FindItemByTag(KeyTag);

if (Item != nullptr)
{
    UE_LOG(LogTemp, Log, TEXT("Player has the golden key!"));
}

// Get inventory weight
int32 TotalWeight = InventoryComponent->GetInventoryWeight();

// Listen to inventory events
InventoryComponent->OnItemAdded.AddDynamic(this, &AMyCharacter::OnInventoryItemAdded);
InventoryComponent->OnItemEquipped.AddDynamic(this, &AMyCharacter::OnItemEquipped);
```

### Setting Up UI

1. **Create Blueprint Widget** inheriting from `UInv_InventoryBase`
   - Or use provided `WBP_Inv_SpatialInventory` or `WBP_Inv_SpatialInventoryFullScreen`

2. **Assign to Inventory Component**:
   - In Blueprint: Set `InventoryMenuClass` on `BP_Inv_InventoryComponent`

3. **Toggle Inventory** via Input Action:
   - Use `IA_ToggleInventory` (default: "I" key)
   - Or call `ToggleInventory()` on `AInv_PlayerController`

## Architecture

### Core Components

| Component | Purpose | Replication |
|-----------|---------|-------------|
| `UInv_InventoryComponent` | Main inventory storage and management | ✅ Server-authoritative |
| `UInv_EquipmentComponent` | Equipment slot management and actor spawning | ✅ Replicated |
| `UInv_ItemComponent` | Attached to world pickups | ❌ No replication needed |
| `AInv_PlayerController` | Handles pickup interaction and weight management | ✅ Replicated |

### Data Structures

| Type | Purpose |
|------|---------|
| `FInv_ItemManifest` | Item definition with fragment composition |
| `UInv_InventoryItem` | Runtime inventory item instance |
| `FInv_InventoryFastArray` | Replicated inventory storage |
| `FInv_ItemFragment` | Base class for all item fragments |

### Available Item Fragments

| Fragment | Purpose | Properties |
|----------|---------|------------|
| `FInv_GridFragment` | Grid size and padding | `GridSize: FIntPoint`, `GridPadding: float` |
| `FInv_ImageFragment` | Icon texture | `Icon: UTexture2D*`, `IconDimensions: FVector2D` |
| `FInv_TextFragment` | Display text | `FragmentText: FText` |
| `FInv_WeightFragment` | Item weight | `Weight: int32` |
| `FInv_StackableFragment` | Stack behavior | `MaxStackSize: int32`, `StackCount: int32` |
| `FInv_EquipmentFragment` | Equipment data | `EquipActorClass`, `SocketAttachPoint`, `EquipModifiers` |
| `FInv_ConsumableFragment` | Consumable effects | `ConsumeModifiers: TArray<FInv_ConsumeModifier>` |
| `FInv_HealthPotionFragment` | Health restoration | Inherits from `FInv_ConsumableFragment` |
| `FInv_ManaPotionFragment` | Mana restoration | Inherits from `FInv_ConsumableFragment` |
| `FInv_LabeledNumberFragment` | Stat display | `Label: FText`, `Value: float`, `Min/Max: float` |

### Widget System

| Widget Class | Purpose |
|--------------|---------|
| `UInv_InventoryBase` | Base inventory menu widget |
| `UInv_InventoryGrid` | Category-specific spatial grid |
| `UInv_GridSlot` | Individual grid slot widget |
| `UInv_SlottedItem` | Visual item representation in grid |
| `UInv_HoverItem` | Item tooltip on mouse hover |
| `UInv_ItemDescription` | Item stats and description panel |
| `UInv_ItemPopUp` | Right-click context menu |
| `UInv_HUDWidget` | Main HUD with pickup messages |
| `UInv_EquippedGridSlot` | Equipment slot widget |
| `UInv_CompositeBase` | Base for composite pattern widgets |

### Delegates & Events

The inventory system exposes comprehensive delegates for UI updates:

```cpp
// UInv_InventoryComponent delegates
FInventoryItemChange OnItemAdded;              // Called when item added
FInventoryItemChange OnItemRemoved;            // Called when item removed
FNoRoomInInventory OnNoRoomInInventory;        // Called when inventory full
FStackChange OnStackChange;                    // Called when stack count changes
FItemEquippedStatusChanged OnItemEquipped;     // Called when item equipped
FItemEquippedStatusChanged OnItemUnequipped;   // Called when item unequipped
FInventoryMenuToggle OnInventoryMenuToggle;    // Called when UI opens/closes
```

## Controls

- **E / Primary Interact** - Pick up item from world
- **I / Toggle Inventory** - Open/close inventory menu
- **Left Mouse** - Click to pick up item from slot
- **Left Mouse Drag** - Drag item to move between slots
- **Right Mouse** - Open context menu (split/drop/consume)
- **Drop outside grid** - Drop item to world

## Support

For bugs, questions, or feature requests:

- **GitHub Issues**: [https://github.com/alessandrobelli/InventoryPluginUE5/issues](https://github.com/alessandrobelli/InventoryPluginUE5/issues)
- **Discussions**: Use GitHub Discussions for general questions

## Roadmap

Future planned features:

- [ ] Container system (chests, loot boxes)
- [ ] Item durability system
- [ ] Item comparison tooltips
- [ ] Inventory sorting and filtering

## Contributing

Contributions are welcome! To contribute:

1. **Fork the repository**
2. **Create a feature branch**: `git checkout -b feature/YourFeature`
3. **Make your changes** following the existing code style
4. **Test thoroughly** in multiplayer scenarios
5. **Commit with clear messages**: `git commit -m "Add feature: description"`
6. **Push to your fork**: `git push origin feature/YourFeature`
7. **Open a Pull Request** with detailed description

### Development Guidelines

- Follow Unreal Engine coding standards
- Use `UPROPERTY()` for all replicated variables
- Add `UFUNCTION()` for Blueprint-exposed functions
- Test in both single-player and multiplayer (listen server + clients)
- Document public APIs with comments

## Credits

Started from the Udemy course "Unreal Engine 5 C++ Inventory Systems" by Stephen Ulibarri, extended since.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Project Status

### Recent Updates

- **v1.1.0** (2025-11-16)
  - Fixed drag-drop edge highlighting issues
  - Added `bIsDragging` flag to prevent boundary interference
  - Improved GridSlot event handling for reliable hover detection
  - Removed canvas boundary check from `HighlightSlots()`

- **v1.0.0** (2025)
  - Initial release
  - Core inventory system with grid layout
  - Equipment system with stat modifiers
  - Consumable system
  - Full multiplayer support
  - Drag-drop UI system
