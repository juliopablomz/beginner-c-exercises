// Elabore um programa que leia um caractere e depois o imprima como um valor inteiro.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char c = getchar();
  printf("'%c' = %d\n", c, c);
  return 0;
}
