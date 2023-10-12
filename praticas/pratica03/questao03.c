//faça um programa em C que imprima um qualitativo associado a uma nota lida conforme a tabela: 1 = Ruim; 2 = Insuficiente; 3 = Suficiente, 4 = Bom, 5 = Ótimo, e imprima Nota inválida nos demais casos.

#include <stdio.h> 

int main () {
  int nota_lida = 0;
  
  printf("Digite uma nota de 1 a 5: ");
  
  int leu_certo = scanf("%i", &nota_lida);
 
  if (leu_certo) {
   switch(nota_lida) {
   case 0:
   case 1: printf("Ruim\n"); break;
   case 2: printf("Insuficiente\n"); break;
   case 3: printf("Suficiente\n"); break;
   case 4: printf("Bom\n"); break;
   case 5: printf("Ótimo\n"); break;
   default: printf("Nota inválida\n"); break;
 }
  // if (nota_lida == 1 ){
  //   printf("Ruim\n");
  // }
  // else if (nota_lida == 2){
  //   printf("Insuficiente\n");
  // }
  // else if (nota_lida == 3){
  // printf("Suficiente\n"); 
  // }
  // else if (nota_lida == 4){
  //   printf("bom\n");
  // }
  // else if (nota_lida == 5){
  //   printf("Ótimo\n");
  // } else {
  //  printf("Erro ao ler. Tente novamente!\n");
  // }   
  }
  return 0;
}