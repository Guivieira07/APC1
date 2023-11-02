#include <stdio.h>

int main() {

  int altura = 14;
  int base = 7;
  
  printf("Informe a altura");
  scanf("%i", &altura);
  printf("Informe a base");
  scanf("%i", &base);
  
  float area = altura * base /2.0f;
  printf("a area do triângulo é %.2f\n", area);
  return 0;
}