// Faça uma calculadora que leia dois números e exiba com o resultado das quatro operações matemáticas básicas

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    int n1, n2, soma, subt, mult, div;

    printf("DIGITE DOIS NÚMEROS INTEIROS PARA A REALIZAÇÃO DAS 4 OPERAÇÕES BÁSICAS DA MATEMÁTICA.\n\n");

    printf("Primeiro número: ");
    scanf("%d", &n1);

    printf("Segundo número: ");
    scanf(" %d", &n2);

    soma = n1 + n2;
    subt = n1 - n2;
    mult = n1 * n2;
    div = n1 / n2;

    system("cls");

    printf("O resultado de %d + %d = %d\n", n1, n2, soma);
    printf("O resultado de %d - %d = %d\n", n1, n2, subt);
    printf("O resultado de %d * %d = %d\n", n1, n2, mult);
    printf("O resultado de %d / %d = %d\n", n1, n2, div);

    system("pause");
    return 0;
}
