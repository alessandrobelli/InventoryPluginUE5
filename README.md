# 🎒 UE5 Inventory Plugin

[![Status](https://img.shields.io/badge/Status-Finished-green)](https://github.com)
[![UE5](https://img.shields.io/badge/UE5-Compatible-blue)](https://unrealengine.com)

A modern, grid-based inventory system for Unreal Engine 5 with full multiplayer support.

## ✅ Completed

This plugin is **finished**.

## ✨ Features

### 🧩 Core System
- **Fragment-Based Items** - Modular item architecture using composable fragments ✅
- **Grid Layout** - Spatial inventory with multi-slot item support ✅
- **Category Tabs** - Auto-sorted Equippables, Consumables, and Craftables ✅
- **Item Stacking** - Configurable stack limits per item type ✅
- **Equipment System** - Full equipment slots with stat modifiers ✅
- **Item Detection** - Line trace pickup system with highlighting ✅

### 🖱️ User Interface
- **Drag & Drop** - Intuitive item movement between slots ✅
- **Item Hover** - Detailed info popups on mouse-over ✅
- **Equipment Comparison** - Side-by-side equipped item comparison ✅
- **HUD Integration** - Pickup notifications and status messages ✅
- **Blueprint Ready** - Extensive Blueprint widget support ✅

### 🌐 Network Features
- **Multiplayer Ready** - Server-authoritative with FastArray replication ✅
- **Network Optimized** - Efficient serialization for performance ✅
- **RPC Support** - Server/client communication for all operations ✅

### 🔧 Developer Tools
- **Component-Based** - Easy integration with existing actors ✅
- **Tag System** - Gameplay Tags for item identification ✅
- **Static Utilities** - Helper functions for common operations ✅
- **Widget Utilities** - Positioning and UI helper functions ✅

## 🚀 Quick Start

1. **Add Component**
   ```cpp
   // Add to your character/actor
   UInv_InventoryComponent* InventoryComp = CreateDefaultSubobject<UInv_InventoryComponent>(TEXT("Inventory"));
   ```

2. **Create Items**
   - Use `FInv_ItemManifest` with fragments for item definitions
   - Configure grid size, icons, and properties

3. **Setup UI**
   - Extend provided Blueprint widgets
   - Connect to inventory component events

## 📁 Architecture

```
📦 Core Classes
├── 🎯 UInv_InventoryComponent - Main inventory manager
├── 📋 UInv_InventoryItem - Item data container
├── 🧩 FInv_ItemManifest - Item definition with fragments
├── ⚡ FInv_InventoryFastArray - Network-optimized storage
└── 🛠️ UInv_InventoryStatics - Utility functions

📦 UI Widgets
├── 🖼️ UInv_SpatialInventory - Main grid widget
├── 📱 UInv_InventoryGrid - Category-specific grids
├── 🎈 UInv_HoverItem - Item info popups
└── 📢 UInv_HUDWidget - HUD integration
```

## 🔧 Item Fragments

| Fragment | Purpose |
|----------|---------|
| `FInv_GridFragment` | Size & grid placement |
| `FInv_ImageFragment` | Icons & visuals |
| `FInv_StackableFragment` | Stack behavior |
| `FInv_DescriptiveFragment` | Name & description |

## 🎮 Controls

- **Left Click** - Select/Pick up item
- **Right Click** - Context actions



---
