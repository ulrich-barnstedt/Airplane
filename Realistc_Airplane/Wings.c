#include <stdio.h>
#include <stdlib.h>
#include "Wings.h"

typedef int boolean;

struct Wing{

    float airbreak;
    float flaps;

    boolean fire;
    float damage;
};

PWing Wings_create(){

    PWing retVal = (PWing) malloc(sizeof(struct Wing));
    retVal->airbreak = 0;
    retVal->flaps = 0;
    retVal->fire = 0;
    retVal->damage = 0;

    return retVal;
}
PWingArr Wings_createArr(int count){

    PWingArr retVal = (PWingArr) malloc(count * sizeof(PWing));

    for(int i = 0; i < count; i++){

        retVal[i] = Wings_create();
    }
    return retVal;
}

void Wings_print(PWing _this){

    printf("   Airbreak: %.2f%c\n", _this->airbreak, '%');
    printf("   Flaps: %.2f%c\n", _this->flaps, '%');
    printf("   Fire: %d\n", _this->fire);
    printf("   Damage: %.2f\n", _this->damage);
}
void Wings_printArr(PWingArr _this, int count){

    for(int i = 0; i < count; i++){
        printf("Wings %d {\n", i + 1);
        Wings_print(_this[i]);
        printf("}\n");
    }
}
