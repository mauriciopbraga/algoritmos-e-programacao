// Fa�a uma calculadora que leia dois n�meros e exiba com o resultado das quatro opera��es matem�ticas b�sicas

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    int n1, n2, soma, subt, mult, div;

    printf("DIGITE DOIS N�MEROS INTEIROS PARA A REALIZA��O DAS 4 OPERA��ES B�SICAS DA MATEM�TICA.\n\n");

    printf("Primeiro n�mero: ");
    scanf("%d", &n1);

    printf("Segundo n�mero: ");
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
