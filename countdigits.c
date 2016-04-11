#include <stdio.h>

int main(void){
  int c, i, nother, nwhite;
  int ndigit[10];

  nwhite = nother = 0;
  for (i=0; i < 10; ++i)
    ndigit[i] = 0;

  while ((c = getchar()) != EOF){
    if (c >= '0' && c <= '9')
      ++ndigit[c-'0'];
    else if (c == ' ' || c == '\n' || c == '\t')
      ++nwhite;
    else
      ++nother;
  }

  for (i=0; i<10; ++i)
    printf("%d:%d ", i, ndigit[i]);
  printf("\nWhite Spaces: %d\n Other: %d\n", nwhite, nother);



}