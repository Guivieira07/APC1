#include <math.h>
#include <stdio.h>

int main() {
  int valor_em_giga = 10;

  double valor_em_bytes = valor_em_giga * pow(1024, 3);

  printf("Digite o valor em Gigas");
  scanf("%i", &valor_em_giga);

  printf("o valor %d em gigabytes equivale a %f bytes\n", valor_em_giga,
         valor_em_bytes);

  return 0;
}