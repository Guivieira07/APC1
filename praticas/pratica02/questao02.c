#include <stdio.h>

int main() {

float valor_bruto = 0.0f;
float valor_desconto = 0.0f;


  
printf("Entre com um valor");
  scanf("%f", &valor_bruto);

  if (valor_bruto  <= 100.0f) {
    valor_desconto = valor_bruto * 0.01;
  }

  if(valor_bruto > 100.0f && valor_bruto <= 500.0f) {
    valor_desconto = valor_bruto * 0.05;
  }

  if (valor_bruto > 500.0f) {
    valor_desconto = valor_bruto * 0.1;
  }

  printf("O valor do desconto foi %.2f\n"), valor_desconto;
  

  return 0;
}