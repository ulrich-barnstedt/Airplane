#pragma once

typedef struct Rudder* PRudder;
typedef struct Rudder** PRudderArr;

PRudder Rudder_create();
PRudderArr Rudder_createArr(int count);

void Rudder_print(PRudder _this);
void Rudder_printArr(PRudderArr _this, int count);
