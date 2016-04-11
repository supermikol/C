#include <stdio.h>

int v2 = 2;

extern int vm, v1, v3;

int func2(){
  return printf("vm = %d, v1 = %d, v2 = %d, v3 = %d\n", vm, v1, v2, v3);
}