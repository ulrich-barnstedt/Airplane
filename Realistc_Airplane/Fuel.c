#include <stdio.h>
#include <stdlib.h>
#include "Fuel.h"

struct Fuel{

    float kerosin;
    float benzin;

    int temp;
    float dichte;
};

PFuel Fuel_create(float kerosin, float benzin){

    PFuel retVal = (PFuel) malloc(sizeof(struct Fuel));
    retVal->kerosin = kerosin;
    retVal->benzin = benzin;

    retVal->temp = 220;
    retVal->dichte = 0.845; //kg/l

    return retVal;
}
