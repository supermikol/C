#include <stdio.h>
#define  MAXLINE  1000


void stringcat(char s[], char t[]);

int main(void) {
  int c, i;
  char init[MAXLINE], concat[MAXLINE];

  i = 0;
  while ((c = getchar()) != EOF && c != '\n') {
    init[i] = c;
    i++;
  }
  while (c == '\n')
    c = getchar();
  // init[i] = ' ';
  // i++;
  i = 0;
  concat[i] = c;
  i++;
  while ((c = getchar()) != EOF && c != '\n') {
    concat[i] = c;
    i++;
  }
  stringcat(init,concat);
  printf("String is: %s\n", init);
}

void stringcat(char s[], char t[]){
  // char final[MAXLINE];
  int j, k;
  j = k = 0;
  while (s[j] != '\0') {
    j++;
  }
  s[j++] = ' ';
  // final[k++] = ' ';
  while (t[k] != '\0') {
    s[j++] = t[k++];
  }
  // return final;
}