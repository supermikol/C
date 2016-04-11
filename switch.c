#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  char Buffer[10];
  if (argc < 2) {
    printf("Insufficient Commands\n");
    exit(1);
  }

  strncpy(Buffer, argv[1], 9);

  // switch (argv[1][1]){
  switch (Buffer[1]){
    case 'A':
    case 'a':
      printf("Option A\n");
      break;
    case 'B':
    case 'b':
      printf("Option B\n");
      break;
    default:
      printf("Unknown Operation\n");

  }

}