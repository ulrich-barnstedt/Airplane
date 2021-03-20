#pragma once

#include "AirplaneConfig.h"
#include "Turbine.h"
#include "Gears.h"
#include "Wings.h"
#include "Rudder.h"
#include "Luftwiderstand.h"

typedef struct Airplane* PAirplane;

PAirplane Airplane_create();

void Airplane_addThrust(PAirplane _this);
void Airplane_removeThrust(PAirplane _this);

void Airplane_Debug_printAllData(PAirplane _this);

void Airplane_update(PAirplane _this);
