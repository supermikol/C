#include <stdio.h>

int strcomp(char *t, char *s) {
  for(; *t == *s; s++, t++){
    if (*s == '\0')
      return 0;
  }
  return *s - *t;
}

int main(void){
  char s[]="hello";
  char t[]="hezlo";

  printf("comparing results: %d\n", strcomp(s,t));
}