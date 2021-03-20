#include <stdio.h>
#include <stdlib.h>
#include "Airplane.h"
#include "Turbine.h"
#include "Gears.h"
#include "Wings.h"
#include "Rudder.h"
#include "AirplaneConfig.h"
#include "Luftwiderstand.h"

int main(){

    PConfig config = Config_create(0.3, 42, 4, 1, 3, 2, 1, "A 320 Neo");

    PAirplane airplane = Airplane_create(config);//Working

    Airplane_Debug_printAllData(airplane);
}
