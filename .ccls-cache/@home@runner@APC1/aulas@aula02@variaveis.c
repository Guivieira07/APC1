#include <stdio.h>

int main() {
  short int inteiro_curto; // 2 bytes

  long int inteiro_longo; // 8 bytes -9223372036854775808 a 9.223.372.036.854.775.807

unsigned long int inteiro_longo_sem_sinal; // vai de 0 a 18.446.744.073.709.551.615
  
  unsigned int inteiro_sem_sinal; //vai de 0 a 4.294.967.295
  
long double duplo_longo; //16 bytes
  
  char caracter; // 1  byte guarda valor de -128 a 127 'a', '1',','

  int inteiro; // 4 bytes guarda valor de -2147483648 a 2147483647

  float ponto_flutuante; // 4 bytes guarda valor de casas decimais de 0.123456f

  double duplo; // 8 bytes guarda valor de casas decimais de 0.1234567890123456

  void nada; // 1 byte
  
 return 0;
}