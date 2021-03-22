#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "AirplaneConfig.h"
#include "Turbine.h"
#include "Gears.h"
#include "Wings.h"
#include "Rudder.h"

#define MAX_STRING 31

typedef int boolean;

struct Config{

    char callSign[MAX_STRING];

    boolean gearsUp;
    float weight;
    float length;
    float span;

    float hullDiameter;
    int wingsCount;
    int rudderCount;
    int gearsCount;
    int turbineCount;

    int thrustAddValue;
};

PConfig Config_create(float weight, int wingsCount, int rudderCount, int gearsCount, int turbineCount, int thrustAddVlue, char* callSign, float span, float hullDiameter, float length){

    PConfig retVal = (PConfig) malloc(sizeof(struct Config));

    strcpy(retVal->callSign, callSign);
    retVal->length = length;
    retVal->hullDiameter = hullDiameter;
    retVal->span = span;
    retVal->gearsCount = gearsCount;
    retVal->gearsUp = 0;
    retVal->rudderCount = rudderCount;
    retVal->thrustAddValue = thrustAddVlue;
    retVal->turbineCount = turbineCount;
    retVal->weight = weight;
    retVal->wingsCount = wingsCount;

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
    printf("   HullDiameter: %.2f\n", _this->hullDiameter);
    printf("   Length: %.2f\n", _this->length);
    printf("   Span: %.2f\n", _this->span);
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
int Config_getSpan(PConfig _this){

    return _this->span;
}
int Config_getHullDiameter(PConfig _this){

    return _this->hullDiameter;
}
