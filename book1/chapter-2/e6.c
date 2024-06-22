// Faça um programa que leia um valor do tipo double e depois o imprima na forma de notação científica.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  double d;
  scanf("%lf", &d);

  printf("d = %e\n", d);
  return 0;
}
