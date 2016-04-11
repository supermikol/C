#include <stdio.h>





int main(void) {

  int arr[3] = {5, 10, 15};
  int i, *ptr = arr;

  while (*ptr){
    printf("Hex Address: %X, Int Address: %d, Value: %d\n", ptr, ptr, *ptr);
    ptr++;
  }

  for (ptr = arr, i=0; i < 4; i++){
    *(ptr + i) = '\0';
  }

  while (*ptr){
    printf("Hex Address: %X, Int Address: %d, Value: %d\n", ptr, ptr, *ptr);
    ptr++;
  }
}