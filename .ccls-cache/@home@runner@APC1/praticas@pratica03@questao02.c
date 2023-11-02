#include <stdio.h>

int main() {

float valor_bruto = 0.0f;
float valor_desconto = 0.0f;


  
printf("Entre com um valor:");
  int leu_certo = scanf("%f", &valor_bruto);

  if (leu_certo) {

  if (valor_bruto  <= 100.0f) {
    valor_desconto = valor_bruto * 0.01;
  } else if (valor_desconto > 100.0f && valor_desconto <= 500.0f) {
    valor_desconto = valor_bruto * 0.05;
  }else if (valor_bruto > 500.0f) {
    valor_desconto = valor_bruto * 0.1;
  }

  printf("O valor do desconto foi %.2f\n", valor_desconto);
  } else{
    printf("Erro na leitura do valor. Tente novamente\n");
  }

  return 0;
}