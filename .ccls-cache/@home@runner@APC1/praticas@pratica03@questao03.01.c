#include <stdio.h>

int main(){
int nota_lida;

  printf("digite uma nota de 1 a 5:");
  int leu_certo = scanf("%i", &nota_lida);

  if(nota_lida == 1){
    printf("ruim\n");
  }else if (nota_lida == 2){
    printf("insuficiente\n");
  }else if (nota_lida == 3){
    printf("suficiente\n");
  }else if (nota_lida == 4){
    printf("bom\n");
  }else if (nota_lida == 5){
    printf("ótimo\n");  
  } else {
    printf("Erro ao ler. Tente novamente!\n");
  }
  
  return 0;
}