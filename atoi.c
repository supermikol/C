#include <ctype.h>
#include <stdio.h>
#include <string.h>
#define MAXLINE 1000

int c, i;
char b[MAXLINE];
int atoi(char s[]);
char *reverses(char t[]);


int main(void){
  i = 0;
  while ((c = getchar()) != EOF) {
    b[i++] = c;
  }

  // printf("%d\n", atoi(b));
  printf("From Main:%s\n", reverses(b));
  printf("From Main2:%s\n", b);
}

int atoi(char s[]){
  int n;
  for (i = 0; isdigit(s[i]); i++)
    n = n*10 + (s[i] - '0');
  return n;
}

char *reverses(char t[]) {
  int c, i, j;
  for(i = 0, j = strlen(t)-1; i < j; i++, j--) {
    c = t[i];
    t[i] = t[j];
    t[j] = c;
  }
  printf("From Function: %s\n", t);
  return t;

}