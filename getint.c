#include <stdio.h>
#include <ctype.h>

#define SIZE  10

int getch(void);
void ungetch(int);
int buf[SIZE], i = 0;
int getint(int *);

int main(void) {
  int n, array[SIZE];
  int j = 0;
  for (n = 0; n < SIZE && getint(&array[n]) != EOF; n++)
    ;

  while(array[j]) {
    printf("%d:", array[j]);
    j++;
  };
  printf("\nfinished iterating through array\n");

  while(i>0)
    printf("Emptying buffer: %c\n", buf[--i]);
}

int getint(int *ap){
  int c, sign;

  while(isspace(c = getch()))
    ;

  if( !isdigit(c) && c != EOF && c != '+' && c != '-' ) {
    ungetch(c);
    printf("\nnon-integer: %c\n", c);
    return 0;
  }

  sign = (c == '-') ? -1 : 1;

  if (c == '-' || c == '+'){
    c = getch();
  };

  for (*ap = 0; isdigit(c); c = getch())
    *ap = *ap * 10 + (c - '0');
  *ap *= sign;
  if (c != EOF)
    ungetch(c);
  return c;
}

void ungetch(int c) {
  buf[i++] = c;
}

int getch(void) {
  return (i > 0) ? buf[--i] : getchar();
}

