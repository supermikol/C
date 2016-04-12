#include <stdio.h>

void sstrcpy(char *s, char *t)
{
  while ((*s = *t) != '\0'){
    printf("loading: %c\n", *t);
    s++;
    t++;
  }
  printf("done\n");
}

void stringcpy(char *s, char *t)
{
  printf("About to load: %c into %c\n", *t, *s);
  while (*s++ = *t++)
    printf("About to load: %c into %c\n", *t, *s);
  printf("done\n");
}

void printarray(char *s) {
  while (*s != '\0'){
    printf("%c", *s);
    s++;
  }
  printf("\n");
}

int main(void){
  char a[] = "helloooooooooooo"; //this is located last
  char c[] = "ccc"; //this is located fourth
  char d[] = "d"; //this is located third
  char z[] = "zz"; //this is located second
  char b[] = "bb"; //this is located first

  // printf("a:");
  printf("a:");
  printarray(a);
  printf("b:");
  printarray(b);
  printf("c:");
  printarray(c);
  printf("d:");
  printarray(d);

  stringcpy(b, a);
  sstrcpy(d, c);

  printf("a:");
  printarray(a);
  printf("b:");
  printarray(b);
  printf("c:");
  printarray(c);
  printf("d:");
  printarray(d);

  printf("z:");
  printarray(z);

}