// Faça um programa que leia três caracteres do tipo char e depois os imprima um em cada linha.
// Use um único comando printf() para isso.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int x, y, z;
  printf("insert \"x, y, z\": ");
  scanf("%i,%i,%i", &x, &y, &z);

  printf("%i\n%i\n%i\n", x, y, z);
  return 0;
}
