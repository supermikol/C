#include <stdio.h>
#include <unistd.h>
#define IN 0
#define OUT 1

int main(void){
  int c, i, nl, nc, nw, wordlength, state;
  int wordcount[3];
  for (i=0; i<3; ++i)
    wordcount[i] = 0;

  nl = nc = nw = wordlength = 0;
  state = IN;
  while ((c = getchar()) != EOF) {
    ++nc;
    if (c == '\n')
      ++nl;
    if (c == ' ' || c == '\n' || c == '\t'){
      if (state != OUT) {
        printf("\n");
      }
      state = OUT;
    } else if (state == OUT) {
      state = IN;
      ++nw;
      if (wordlength > 0 && wordlength <= 5)
        ++wordcount[0];
      else if (wordlength <= 10)
        ++wordcount[1];
      else
        ++wordcount[2];
      wordlength = 0;
      // putchar(c);
    } else
      // putchar(c);
      ++wordlength;
  }
  // printf("%d characters\n", nc);
  // printf("%d lines\n", nl);
  // printf("%d words\n", nw);

  printf("Word Length Frequency:\n");
  printf("  1-5: %*s|%d\n", wordcount[0], "", wordcount[0]);
  // printf("%d\n%d\n%d\n", wordcount[0], wordcount[1], wordcount[2]);
  printf(" 6-10: %*s|%d\n", wordcount[1], "", wordcount[1]);
  printf("11-15: %*s|%d\n", wordcount[2], "", wordcount[2]);
  printf("      |0    |5    |10\n");


}