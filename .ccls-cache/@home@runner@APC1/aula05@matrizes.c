#include <stdio.h>

int main() {
  int numeros [10];

  numeros[0] = 10;
  numeros[1] = 15;
  numeros[2] = 7;
  numeros[3] = 1;
  numeros[4] = 3;
  numeros[5] = 22;
  numeros[6] = 38;
  numeros[7] = 4;
  numeros[8] = 56;
  numeros[9] = 6;

  for(int i = 0; i < 10; i++){
    printf("%i, ", numeros[i]);
  }

  printf("\n");
  
  return 0;
}