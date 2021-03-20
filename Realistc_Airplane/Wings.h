#pragma once

typedef struct Wing* PWing;
typedef struct Wing** PWingArr;

PWing Wings_create();
PWingArr Wings_createArr(int count);

void Wings_print(PWing _this);
void Wings_printArr(PWingArr _this, int count);
