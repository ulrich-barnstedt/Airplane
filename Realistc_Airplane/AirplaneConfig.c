#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "AirplaneConfig.h"
#include "Turbine.h"
#include "Gears.h"
#include "Wings.h"
#include "Rudder.h"
#include "Luftwiderstand.h"

#define MAX_STRING 31

typedef int boolean;

struct Config{

    char callSign[MAX_STRING];

    boolean gearsUp;
    float weight;

    int wingsCount;
    int rudderCount;
    int gearsCount;
    int turbineCount;
    float cwValue;

    int thrustAddValue;
};

PConfig Config_create(float cw, float weight, int wingsCount, int rudderCount, int gearsCount, int turbineCount, int thrustAddVlue, char* callSign){

    PConfig retVal = (PConfig) malloc(sizeof(struct Config));

    strcpy(retVal->callSign, callSign);
    retVal->gearsCount = gearsCount;
    retVal->gearsUp = 0;
    retVal->rudderCount = rudderCount;
    retVal->thrustAddValue = thrustAddVlue;
    retVal->turbineCount = turbineCount;
    retVal->weight = weight;
    retVal->wingsCount = wingsCount;
    retVal->cwValue = cw;

    return retVal;
}
void Config_print(PConfig _this){

    printf("Config %s{\n", _this->callSign);
    printf("   GearsUp: %d\n   GearsCount: %d\n\n", _this->gearsUp, _this->gearsCount);
    printf("   Weight: %.2ft\n", _this->weight);

    printf("   WingsCount: %d\n", _this->wingsCount);
    printf("   RudderCount: %d\n", _this->rudderCount);
    printf("   GearsCount: %d\n", _this->gearsCount);
    printf("   TurbineCount: %d\n", _this->turbineCount);
    printf("   ThrustAddValue: %d\n", _this->thrustAddValue);
    printf("   CW-Value: %.1f\n", _this->cwValue);
    printf("}\n");
}

int Config_getThrustAddValue(PConfig _this){

    return _this->thrustAddValue;
}
void Config_setThrustAddValue(PConfig _this, int value){

    _this->thrustAddValue = value;
}
int Config_getWingsCount(PConfig _this){

    return _this->wingsCount;
}
int Config_getGearsCount(PConfig _this){

    return _this->gearsCount;
}
int Config_getTurbineCount(PConfig _this){
    return _this->turbineCount;
}
int Config_getRudderCount(PConfig _this){
    return _this->rudderCount;
}

float Config_getCWValue(PConfig _this) {
    return _this->cwValue;
}
