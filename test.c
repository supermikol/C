#include <stdio.h>
void printlist(int v[]);
void swap(int v[], int i, int j);
void qsort(int v[], int left, int right);

int main(void){
  int list[]= {5,7,3,6,2,8,1,0,9,4};
  printlist(list);
  qsort(list, 0, 9);
  printlist(list);
}

void qsort(int v[], int left, int right) {
  if (left >= right)
    return;

  swap(v, (left + right)/2, left);
  int last = left;
  for (int i = left + 1; i <= right; i++)
    if (v[i] < v[left])
      swap(v, ++last, i);
  swap(v, left, last);
  printf("complete partition\n");
  qsort(v, left, last - 1);
  qsort(v, last + 1, right);
}

void swap(int v[], int i, int j){
  int temp = v[i];
  v[i] = v[j];
  v[j] = temp;
}


void printlist(int v[]){
  printf(" 0  1  2  3  4  5  6  7  8  9\n");
  for (int i = 0; i < 10; i++)
   printf("%2d ", v[i]);
  printf("\n\n");
}