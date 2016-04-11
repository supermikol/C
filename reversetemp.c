#include <stdio.h>

#define   LOWER   0
#define   UPPER   300
#define   STEP    20

double convert(int f);

int main(void) {
  int fahr;
  printf("Farenheit Celcius\n");
  for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP) {
    printf("%9d %7.2f\n", fahr, convert(fahr));
  }
}

double convert(int f){
  return (f-32)*(5.0/9);
}