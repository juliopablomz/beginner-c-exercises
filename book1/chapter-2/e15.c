// Escreva um programa que leia três variáveis: char, int e float.
// Em seguida, imprima-as de três maneiras diferentes: separadas por espaços,
// por tabulação horizontal e uma em cada linha.
//
// Use um único comando printf() para cada operação de escrita das três variáveis.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char c;
  int i;
  float f;

  printf("insert char, int and float values: ");
  scanf("%c%d%f", &c, &i, &f);

  // using space
  printf("%c %i %f\n", c, i, f);

  // using horizontal tab
  printf("%c\t%i\t%f\n", c, i, f);

  // using new line
  printf("%c\n%i\n%f\n", c, i, f);
  return 0;
}
