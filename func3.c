#include <stdio.h>

int v3 = 3;

extern int vm, v1, v2;

int func3(){
  return printf("vm = %d, v1 = %d, v2 = %d, v3 = %d\n", vm, v1, v2, v3);
}