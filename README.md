# Exercicio3
#include <stdio.h>
#include <stdlib.h>
  int main() {
  
  float salario, novo_salario;
  
  printf("Informe o salario: "); 
  
  scanf("%f", &salario);  
  
  novo_salario = salario * 0.10;
  
  printf("Aumento de R$ %.2f", novo_salario + salario);
  
  system ("pause");    
  
  return 0;
  
}
