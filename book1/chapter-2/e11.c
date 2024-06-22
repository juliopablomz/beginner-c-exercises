// Elabore um programa que solicite ao usuário entrar com o valor do dia, mês e ano (inteiros).
// Em seguida, imprima os valores lidos separados por uma barra (\).

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int d, m, y;

  printf("insert day\\month\\year: ");
  scanf("%i\\%i\\%i", &d, &m, &y);

  printf("readed: %d\\%d\\%d\n", d, m, y);
  return 0;
}
