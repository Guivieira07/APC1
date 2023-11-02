#include <stdio.h>
#include <math.h>
int main() {
  int coeficiente_A = -1;
  int coeficiente_B = 2;
  int coeficiente_C = 1;
  
printf("Digite o valor do coeficiente A");
scanf("%i", &coeficiente_A);
printf("Digite o valor do coeficiente B");
scanf("%i", &coeficiente_B);
printf("Digite o valor do coeficiente C");
scanf("%i", &coeficiente_C);
  
double delta = pow(coeficiente_B, 2) - 4 * coeficiente_A * coeficiente_C;
double raiz1 = (-coeficiente_B + sqrt(delta))/2 * coeficiente_A;
double raiz2 = (-coeficiente_B - sqrt(delta))/2 * coeficiente_A;

  printf("as raizes da equação %dX ^2 %dX %d são %f e %f\n",coeficiente_A, coeficiente_B, coeficiente_C, raiz1, raiz2);
  return 0;
}