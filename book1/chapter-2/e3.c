// Escreva um programa que leia um número inteiro e depois imprima a mensagem: "Valor lido:",
// seguido do número inteiro. Use apenas um comando printf().

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int number;
  scanf("%i", &number);
  printf("Valor lido: %i\n", number);
  return 0;
}
