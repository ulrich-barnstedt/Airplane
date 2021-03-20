#include <stdio.h>
#include <stdlib.h>
#include "Gears.h"

typedef int boolean;

struct Gears{

    boolean gearsUp;
    float damge;
    boolean breaks;
};

PGears Gears_create(){

    PGears retVal = (PGears) malloc(sizeof(struct Gears));
    retVal->breaks = 0;
    retVal->damge = 0;
    retVal->gearsUp = 0;

    return retVal;
}
PGearsArr Gears_createArr(int count){

    PGearsArr retVal = (PGearsArr) malloc(count * sizeof(PGears));

    for(int i = 0; i < count; i++){

        retVal[i] = Gears_create();
    }

    return retVal;
}

void Gears_print(PGears _this){
    printf("   gearsUp: %d\n", _this->gearsUp);
    printf("   damage: %.2f\n", _this->damge);
    printf("   break: %d\n", _this->breaks);
}
void Gears_printArr(PGearsArr _this, int count){

    for(int i = 0; i < count; i++){
        printf("Gears %d {\n", i + 1);
        Gears_print(_this[i]);
        printf("}\n");
    }
}
