/* Desenvolver um algoitmo para solicitar ao usuário 2 números reais e realizar as quatro operações aritméticas básicas com esses números.
No final do programa, exibir os resultados obtidos. Utilize funções para cada operação. */

#include <stdio.h>

void calculadora(float n1, float n2){
    printf("\n%.2f + %.2f = %.2f\n", n1, n2, n1 + n2);
    printf("%.2f - %.2f = %.2f\n", n1, n2, n1 - n2);
    printf("%.2f * %.2f = %.2f\n", n1, n2, n1 * n2);
    printf("%.2f * %.2f = %.2f\n", n1, n2, n1 * n2);
}
void main(float n1, float n2){
    printf("Numero: ");
    scanf("%f", &n1);
    printf("Numero: ");
    scanf("%f", &n2);

    calculadora(n1, n2);
}