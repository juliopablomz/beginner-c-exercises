// Faça um programa que leia um valor do tipo float e depois o imprima usando o operador "%d".
// Veja o que aconteceu.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float f;
  scanf("%f", &f);
  printf("d using %%d: %d", f);
  return 0;
}
