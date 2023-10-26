#include <stdio.h>

int main() {
  int numero = 1;
  printf("Entre com um numero inteiro de 1 a 10:");
  int leu_certo = scanf("%i", &numero);

  while (numero < 1 || numero > 10) {
    printf("Numero inválido. Tente novamente:");
    int leu_certo = scanf("%i", &numero);
  }

  do {
    printf("Numero inválido. Tente novamente:");
    int leu_certo = scanf("%i", &numero);

  } while (numero < 1 || numero > 10);

  printf("A tabuada de %i\n", numero);
  int i = 0;
  while (i < 10) {
    printf("%i x %i = %i\n", numero, i + 1, numero * (i + 1));
    i++;
  }
  return 0;
}