//Faça um programa em C que calcule o fatorial de um número inteiro.

#include <stdio.h> 

int main() {
  long int n,fatorial = 1;
  int numero = 0;

  printf("digite um número inteiro > 0:\n");
 int leu_certo = scanf("%i",&numero);

  for(int i=0; i<numero; i++) {
    fatorial = fatorial * (numero - i);
  }
   printf("o fatorial de %i eh %li\n",numero,fatorial);
  return 0;
}