#include <stdio.h>
#include <stdlib.h>
#include "Rudder.h"

typedef int boolean;
struct Rudder{

    float angle;

    boolean fire;
    float damage;
};

PRudder Rudder_create(){

    PRudder retVal = (PRudder) malloc(sizeof(struct Rudder));
    retVal->angle = 0;
    retVal->damage = 0;
    retVal->fire = 0;

    return retVal;
}
PRudderArr Rudder_createArr(int count){

    PRudderArr retVal = (PRudderArr) malloc(count * sizeof(PRudder));

    for(int i = 0; i < count; i++){

        retVal[i] = Rudder_create();
    }
    return retVal;
}

void Rudder_print(PRudder _this){

    printf("   Angle: %.2f\n", _this->angle);
    printf("   Damage: %.2f\n", _this->damage);
    printf("   Fire: %d\n", _this->fire);
}
void Rudder_printArr(PRudderArr _this, int count){

    for(int i = 0; i < count; i++){
        printf("Rudder %d {\n", i + 1);
        Rudder_print(_this[i]);
        printf("}\n");
    }
}
