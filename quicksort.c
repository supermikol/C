#include <stdio.h>

void qsort(int v[], int left, int right);
void printlist(int v[]);

int main(void){
  int list[] = {41,5,86,132,7,68,34,63,75,27,46,63};
  printlist(list);
  qsort(list, 0, 11);
  printlist(list);

}

void qsort(int v[], int left, int right) {
  printf("PARTITIONING from %d to %d\n\n", left, right);
  int last;
  void swap(int v[], int i, int j);

  if (left >= right)
    return;
  swap(v, left, (left + right)/2);
  printf("after quick swap:\n");
  printlist(v);
  last = left;
  for (int i = left + 1; i <= right; i++) {
    printf("check if v[%d] is less than v[%d]\n", i, left);
    if (v[i] < v[left]) {
      printf("Yes, swapped v[%d](%d) with v[%d](%d)\n", i, v[i], last+1, v[last+1] );
      swap(v, ++last, i);
      printlist(v);
    }
    else
      printf("No\n");
  }
  printf("Swap first to last swapped piece: v[%d] to v[%d]\n\n", left, last);
  swap(v, left, last);
  printlist(v);
  qsort(v, left, last-1);
  qsort(v, last+1, right);

}

void swap(int v[], int i, int j) {
  int temp;

  temp = v[i];
  v[i] = v[j];
  v[j] = temp;
}

void printlist(int v[]){
  printf(" 0  1  2  3  4  5  6  7  8  9 10 11\n");
  for (int i = 0; i < 12; i++)
   printf("%2d ", v[i]);
  printf("\n\n");
}