#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// takes one character input at a time and displays the ASCII number

int main(int argc, char *argv[]) {
  int i;

  do {
    i = getchar();
    getchar();
    if (i == 'x')
      continue;
    printf("the ASCII character is: %d\n", i);

  } while (i != 'Q');

}