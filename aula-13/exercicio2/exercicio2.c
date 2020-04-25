/*Ler a idade de uma pessoa expressa em anos, meses e dias.
O algoritmo deve mostrar a idade da pessoa em dias
(considere que todos os anos tem 365 dias e todos os meses tem 30 dias).*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    int anos, meses, dias, result;

    printf("Quantos anos você tem? ");
    scanf("%d", &anos);
    printf("Quantos meses você tem desde seu aniversário? ");
    scanf("%d", &meses);
    printf("Quantos dias você tem desde seu aniversário? ");
    scanf("%d", &dias);

    result = (anos * 365) + (meses * 30) + dias;

    printf("Você tem %d dias vividos\n", result);

    system("pause");
    return 0;
}
