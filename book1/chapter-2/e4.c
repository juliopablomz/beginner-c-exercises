// Faça um programa que leia um número inteiro e depois o imprima usando o operador "%f".
// Veja o que aconteceu.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int number;
  scanf("%i", &number);
  printf("number using %%f: %f\n", number);
  return 0;
}
