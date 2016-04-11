#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  char Buffer[10];
  if (argc < 2){
    printf("No command included\n");
    exit(1);
  }

  strncpy(Buffer,argv[1],9);
  if (!strcmp(Buffer, "/?"))
    printf("Here is the help menu\n");
  else if (!strcmp(Buffer, "/A"))
    printf("Option A\n");
  else if (!strcmp(Buffer, "/B"))
    printf("Option B\n");
  else
    printf("Command not recognized\n");
}