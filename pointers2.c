#include <stdio.h>

int main(void){
  char a[] = "Hello World!";
  char *ap = "Goodbye World!";
  int i = 0;

  while(*ap){
    printf("Address: %d, Char: %c\n", &ap, *ap);
    *ap++;
  };

  while(a[i]){
    printf("Address: %X, Char: %c\n", &a[i], a[i]);
    printf("Address: %X, Char: %c\n\n", a+i, a[i]); //same
    i++;
  };

}