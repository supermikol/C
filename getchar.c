#include <stdio.h>

int main(void) {
  int c;
  char d;
  while ((c = getchar()) != EOF) {
    c = getchar();
    d = (c != EOF);
    putchar(d);
    printf("%d\n", d);
  }

  printf("%d", EOF*30);
}