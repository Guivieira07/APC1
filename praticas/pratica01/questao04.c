#include <stdio.h>

#define ICMS 0.17f
#define COFINS 0.076f
#define PISPASEP 0.0165f
int main() {
  float preco_produto = 72.9f;
  
  float valor_icms = preco_produto * ICMS;
  float valor_cofins = preco_produto * COFINS;
  float valor_pispasep = preco_produto * PISPASEP;
  float preco_final = (1 + ICMS + COFINS + PISPASEP) * preco_produto;

  
  printf("Preço final do produto é %f\n", preco_final);
  printf("O valor do ICMS é %f\n", valor_icms);
  printf("O valor do COFINS é %f\n", valor_cofins);
  printf("O valor do PIS_PASEP é %f\n", valor_pispasep);
  
  return 0;
}