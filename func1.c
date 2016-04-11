#include <stdio.h>

int v1 = 1;

extern int vm, v2, v3;

int func1(){
  static int fv1 = 1; //this fv1 is only defined the first time this function is called. When func1() is called again, fv1 will retain the value it last held. Kind of like closure

  printf("vm = %d, v1 = %d, v2 = %d, v3 = %d, fv1 = %d\n", vm, v1, v2, v3, fv1);
  fv1++;
  return 0; //return will stop the function, so if fv1++ is below it, it won't get returned. For instance, original structure was to return printf
}