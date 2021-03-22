#pragma once

#include "Airplane.h"

typedef struct Input *PInput;

PInput Input_createInstance();

void Input_getUserInput(PInput _this);
int Input_checkUserInput(PInput _this);
void Input_callFunctionNeeded(PInput _this, PAirplane _that);
