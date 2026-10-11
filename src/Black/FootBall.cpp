#include "ColourConstants.h" /* For White */
#include "GameTimeConstants.h"
#include "Football.h"

uint32_t Football::GetSaveType()
{
	return GAME_THING_TYPE_FOOTBALL;
}

bool Football::InteractsWithPhysicsObjects()
{
	return false;
}

LH3DObject::ObjectType Football::Get3DType()
{
	return LH3DObject::MORPHABLE;
}

Football::Football(const MapCoords& coords, const GAbodeInfo* info, Town* town, float y_angle, float scale, float food,
                   int wood)
	: Abode(coords, info, town, y_angle, scale, food, wood), SavedThing(NULL)
{
	SetToZero();
	field_0x1dc = 0;
	field_0x200 = 0;
	field_0x254 = 0;
	field_0x300 = 0;
	field_0x308 = 0;
	field_0x310 = 0;
	field_0x314 = 0;
	field_0x258 = 0;
	field_0x30c = 1.0f;
}

bool32_t Football::IsFootball()
{
	return true;
}

bool32_t Football::CreatureMustAvoid(Creature* param_1)
{
	return false;
}

bool32_t Football::CanBeHiddenIn()
{
	return false;
}
