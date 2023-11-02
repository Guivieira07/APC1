
#include <stdio.h>

int main() {
  float nota_a1 = 0;
  float nota_a2 = 0;

  printf("Entre com a nota A1 entre 0 e 10");
  scanf("%f", &nota_a1);
  printf("Entre com a nota A2 entre 0 e 10");
  scanf("%f", &nota_a2);

  
  float media = 0.4 * nota_a1 + 0.6 * nota_a2;

  printf("A media é %f\n", media);
  return 0;
}