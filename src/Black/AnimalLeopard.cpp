#include "GameTimeConstants.h"
#include "AnimalLeopard.h"
#include "Game3DObject.h" /* For Game3DObject */

#if defined(VERSION_BW1W100)
#define ANIMAL_LEOPARD_FILE "C:\\dev\\black\\AnimalLeopard.cpp"
#elif defined(VERSION_BW1W110)
#define ANIMAL_LEOPARD_FILE "C:\\dev\\Black\\AnimalLeopard.cpp"
#else
#define ANIMAL_LEOPARD_FILE "C:\\dev\\MP\\Black\\AnimalLeopard.cpp"
#endif

uint32_t Leopard::GetSaveType()
{
	return GAME_THING_TYPE_LEOPARD;
}

Leopard* Leopard::Create(const MapCoords& coords, const GAnimalInfo* info, unsigned long param_3)
{
	Leopard* leopard = new (ANIMAL_LEOPARD_FILE, 30) Leopard(coords, info, param_3);
	if (leopard != NULL)
	{
		leopard->CallVirtualFunctionsForCreation(coords);
		leopard->Game3dObject->SetHumanShadowed(1);
	}
	return leopard;
}
