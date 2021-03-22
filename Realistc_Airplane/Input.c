#include "Input.h"
#include <stdio.h>
#include <stdlib.h>

struct Input {
    char choice;
    char lastChoice;
};

PInput Input_createInstance() {
    PInput in = (PInput)malloc(sizeof(struct Input));
    if (!in) {
        in->choice = '0';
        in->lastChoice = in->choice;
    }else {
        printf("Error occured while allocation. (Input)");
        return;
    }
    return in;
}
