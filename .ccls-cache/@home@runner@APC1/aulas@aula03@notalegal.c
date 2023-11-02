#include <stdio.h> // Printf - escreve no console; scanf - ler do console

int main () {
char item1[61] = "Caderno com 10 materias";
int quantidade1 = 1;
float preco1 = 20.0f;
  
char item2[61] = "Lapis";
int quantidade2 = 50;
float preco2 = 0.50f;
  
char item3[61] = "Borracha";
int quantidade3 = 40;
float preco3 = 10.0f;
  
printf("Entre com o nome do item1");
scanf("%s", &item1);
printf("Entre com a qtd do item1");
scanf("%i", &quantidade1);
printf("Entre com o preco1");
scanf("%f", &preco1);

printf("Entre com o nome do item2");
scanf("%s", &item2);
printf("Entre com a qtd do item2");
scanf("%i", &quantidade2);
printf("Entre com o preco2");
scanf("%f", &preco2);

printf("Entre com o nome do item3");
scanf("%s", item3);
printf("Entre com a qtd do item3");
scanf("%i", &quantidade3);
printf("Entre com o preco3");
scanf("%f", &preco3);
  
  
float total = quantidade1 * preco1;
total = total + quantidade2 * preco2;
total = total + quantidade3 * preco3;
  
printf("--------------------------\n");
printf("        NOTA LEGAL        \n");
printf("--------------------------\n");
printf("item        qtd    Valor  \n");
printf("%-11.11s %03i %8.2f\n", item1, quantidade1, preco1);
printf("%-11.11s %03i %8.2f\n", item2, quantidade2, preco2);
printf("%-11.11s %03i %8.2f\n", item3, quantidade3, preco3);
printf("--------------------------\n");
printf("Total       R$ %9.2f", total);
  
  return 0;
}