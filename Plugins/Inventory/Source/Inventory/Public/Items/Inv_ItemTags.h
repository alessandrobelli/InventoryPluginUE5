#pragma once

#include "NativeGameplayTags.h"

namespace GameItems
{
	namespace Equipment
	{
		namespace Weapons
		{
			namespace Axe
			{
				UE_DECLARE_GAMEPLAY_TAG_EXTERN(Axe);
				UE_DECLARE_GAMEPLAY_TAG_EXTERN(Sword);
			}
		}

		namespace Cloaks
		{
			UE_DECLARE_GAMEPLAY_TAG_EXTERN(RedCloack);
		}
		namespace Masks
		{
			UE_DECLARE_GAMEPLAY_TAG_EXTERN(SteelMask);
		}
	}
	namespace Consumables
	{
		namespace Potions
		{
			namespace Red
			{
				UE_DECLARE_GAMEPLAY_TAG_EXTERN(Small);
				UE_DECLARE_GAMEPLAY_TAG_EXTERN(Large);
			}

			namespace Blue
			{
								UE_DECLARE_GAMEPLAY_TAG_EXTERN(Small);
				UE_DECLARE_GAMEPLAY_TAG_EXTERN(Large);
				
			}
			
		}
		
	}

	namespace Craftables
	{
						UE_DECLARE_GAMEPLAY_TAG_EXTERN(FireFernFruit);
				UE_DECLARE_GAMEPLAY_TAG_EXTERN(LuminDaisy);
				UE_DECLARE_GAMEPLAY_TAG_EXTERN(ScorchPetalBlossom);
		
	}
}

