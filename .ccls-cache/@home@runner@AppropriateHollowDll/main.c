#include <stdio.h>
#include <stdlib.h>

int main() {
  int a = 24;
  int b = 18;
  int resul = 123456;
  add(&a, b, &result);
  printf("%d\n", result);
  return 0;
}