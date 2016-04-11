#include <stdio.h>

int main(void){
  int c, nl, nb, nt;
  nl = nb = nt = 0;
  while ((c = getchar()) != EOF) {
    if (c == '\t')
      ++nt;
    if (c == '\n')
      ++nl;
    if (c == ' ')
      ++nb;
  }
  printf("%d new lines\n", nl);
  printf("%d tabs\n", nt);
  printf("%d blanks\n", nb);
}