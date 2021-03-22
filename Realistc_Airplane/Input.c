#include "Input.h"
#include <stdio.h>
#include <stdlib.h>

struct Input {
    char choice;
    char lastChoice;
};

PInput Input_createInstance() {
    PInput in = (PInput)malloc(sizeof(struct Input));

    if (in) {
        in->choice = '0';
        in->lastChoice = in->choice;
    }else {
        printf("Error occured while allocation. (Input)\n");
        return;
    }
    return in;
}

void Input_getUserInput(PInput _this) {
    do {
        printf("Insert ch [a] adding throttle, [s] substracting it.\n");
        fflush(stdin);
        scanf("%c", &(_this->choice));
    }while (Input_checkUserInput(_this));
}

int Input_checkUserInput(PInput _this) {
    return !(_this->choice == 'a' || _this->choice == 's');
}

void Input_callFunctionNeeded(PInput _this, PAirplane _that) {
    Input_getUserInput(_this);

    switch(_this->choice) {
        case 'a': printf("ADD!\n");
                  Airplane_addThrust(_that);
                  break;

        case 's': printf("SUB!\n");
                  Airplane_removeThrust(_that);
                  break;

        default:  printf("DEFAULT!\n");
                  break;
    }
}
