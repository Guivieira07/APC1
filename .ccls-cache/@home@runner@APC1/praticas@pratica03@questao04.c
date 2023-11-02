//Faça um programa em C que leia uma tecla pressionada e determine se ela é uma letra, um dígito ou um caractere especial.

#include <stdio.h> 

int main(){
char tecla = 0;
  
  printf("Digite uma tecla: ");
  int leu_certo = scanf("%c", &tecla); 
  
  if((tecla >= 'A' && tecla <= 'Z') || (tecla >= 'a' && tecla  <= 'z')){
  
    printf("Você digitou uma letra!\n");
  } else if (tecla >= 48 && tecla <= 57){
    printf("Você digitou um número!\n");
  }else {
    printf("Você digitou um caractere especial!\n");
  }
   
  return 0;
}