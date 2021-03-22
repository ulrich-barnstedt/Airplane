#include <stdio.h>
#include <stdlib.h>
#include "Airplane.h"
#include "Turbine.h"
#include "Gears.h"
#include "Wings.h"
#include "Rudder.h"
#include "AirplaneConfig.h"

int main(){

    PConfig config = Config_create(42, 4, 1, 3, 2, 1, "A 320 Neo", 35.80, 3.96, 32);

    PAirplane airplane = Airplane_create(config);

    Airplane_Debug_printAllData(airplane);

}
