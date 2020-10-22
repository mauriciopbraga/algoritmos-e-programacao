/* Desenvolver um algoritmo para solicitar ao usuário 2 números reais e realizar as quatro operações aritméticas básicas com esses números.
No final do programa, exibir os resultados obtidos. Utilize funções para cada operação. */

#include <stdio.h>

float n1, n2;

void soma(){
    printf("\n%.2f + %.2f = %.2f\n", n1, n2, n1 + n2);
}
void subt(){
    printf("%.2f - %.2f = %.2f\n", n1, n2, n1 - n2);
}
void mult(){
    printf("%.2f * %.2f = %.2f\n", n1, n2, n1 * n2);
}
void div(){
    printf("%.2f / %.2f = %.2f\n", n1, n2, n1 / n2);
}
void entrada(){
    printf("Numero: ");
    scanf("%f", &n1);
    printf("Numero: ");
    scanf("%f", &n2);

}
void main(){
    entrada();
    soma();
    subt();
    mult();
    div();
}