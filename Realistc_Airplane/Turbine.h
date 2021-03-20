#pragma once

typedef struct Turbine* PTurbine;
typedef struct Turbine** PTurbineArr;

PTurbine Turbine_create();
PTurbineArr Turbine_createArr(int count);

void Turbine_print(PTurbine _this);
void Turbine_printArr(PTurbineArr _this, int count);
