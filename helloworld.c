#include <stdio.h>

int main(void)
{
  float fahr, cel;
  int step, min, max;
  min = 0;
  max = 300;
  step = 20;
  fahr = min;
  printf("Farenheit%3sCelcius\n", "");
  while (fahr <= max) {
    cel = (fahr-32)*5/9;
    printf("%9.2f %9.2f\n", fahr, cel);
    fahr = fahr + step;
  }


  float fahr2, cel2;
  int step2, min2, max2;
  min2 = 0;
  max2 = 300;
  step2 = 20;
  fahr2 = min2;
  printf("\n");
  printf("Celcius%3sFarenheit\n", "");
  while (cel2 <= max2) {
    fahr2 = cel2*(9.0/5.0) + 32;
    printf("%7.2f %11.2f\n", cel2, fahr2);
    cel2 = cel2 + step2;
  }
  // newfunction();
}

// int newfunction() {
//   float fahr, cel;
//   int step, min, max;
//   min = 0;
//   max = 300;
//   step = 20;
//   fahr = min;
//   printf("Farenheit%3sCelcius\n", "");
//   while (fahr <= max) {
//     cel = (fahr-32)*5/9;
//     printf("%9.2f %9.2f\n", fahr, cel);
//     fahr = fahr + step;
//   }
// }