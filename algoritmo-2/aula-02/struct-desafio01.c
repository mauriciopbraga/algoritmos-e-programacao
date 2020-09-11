/* criar uma estrutura chamada calculadora que contenha 2 valores do tipo float. Solicitar ao usuário que digite dois valores quaisquer;
Realizar o cálculo das quatro operações aritméticas básicas entre esses dois valores lidos e exibir as respostas na tela do computador */

#include <stdio.h>

struct calculadora{
  float valor1, valor2;
};
int main(){
  struct calculadora calculadora;

  printf("Digite um valor: ");
  scanf("%f", &calculadora.valor1);
  printf("Digite outro valor: ");
  scanf("%f", &calculadora.valor2);

  // Adição
  printf("\n%.2f + %.2f = %.2f\n", calculadora.valor1, calculadora.valor2, (calculadora.valor1 + calculadora.valor2));
  // Subtração
  printf("%.2f - %.2f = %.2f\n", calculadora.valor1, calculadora.valor2, (calculadora.valor1 - calculadora.valor2));
  // Multiplicação
  printf("%.2f * %.2f = %.2f\n", calculadora.valor1, calculadora.valor2, (calculadora.valor1 * calculadora.valor2));
  // Divisão
  printf("%.2f / %.2f = %.2f\n", calculadora.valor1, calculadora.valor2, (calculadora.valor1 / calculadora.valor2));

  return 0;
}
