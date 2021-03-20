#pragma once

typedef struct Gears* PGears;
typedef struct Gears** PGearsArr;

PGears Gears_create();
PGearsArr Gears_createArr(int count);

void Gears_print(PGears _this);
void Gears_printArr(PGearsArr _this, int count);
