#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXLINES 5000

char *lineptr[MAXLINES];

int readlines(char *lineptr[], int nlines);
void writelines(char *lineptr[], int nlines);

void mqsort(char *lineptr[], int left, int right);

int main(void){

  int nlines;

  if ((nlines = readlines(lineptr, MAXLINES)) >= 0){
    mqsort(lineptr, 0, nlines-1);
    writelines(lineptr, nlines);
    return 0;
  }
  else
  {
    printf("String too long!");
    return 1;
  }

}

#define MAXLEN 1000
int mgetline(char *, int);
// char *alloc(int);

int readlines(char *lineptr[], int maxlines){
  char *p, line[MAXLEN];
  int len;

  int nlines = 0;

  while ((len = mgetline(line, MAXLEN)) > 0){
    if (nlines > maxlines || (p = malloc(len)) == NULL)
      return -1;
    else {
      line[len-1] = '\0';
      strcpy(p, line);
      lineptr[nlines++] = p;
    }
  }
  return nlines;
}

void writelines(char *lineptr[], int nlines){
  while (nlines-- > 0)
    printf("%s\n", *lineptr++);
}

void mqsort(char *v[], int left, int right){
  int last;
  void swap(char *v[], int i, int j);

  if (left >= right)
    return;
  swap(v, left, (left+right)/2);
  last = left;
  for (int i = left + 1; i <= right; i++)
    if (strcmp(v[i], v[left]) < 0)
      swap(v, ++last, i);

  swap(v,left,last);
  mqsort(v, left, last-1);
  mqsort(v, last+1, right);
}

void swap(char *v[], int i, int j) {
  char *temp;

  temp = v[i];
  v[i] = v[j];
  v[j] = temp;
}