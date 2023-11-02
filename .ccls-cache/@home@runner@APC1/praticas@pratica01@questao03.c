#include <stdio.h>

#define PI 3.1416f;

int main() {
  
const float CONSTANTE_PI = 3.1416f;
  float raio = 20;
  float perimetro = 2 * PI * raio;

   printf("Digite o valor do raio");
  scanf("%f", &raio);
  
  printf("o perímetro da pizza é%f\n", perimetro);
  return 0;
}