#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    int n1, n2, soma, subt, mult, div;

    wprintf(L"DIGITE DOIS NÚMEROS INTEIROS PARA A REALIZAÇÃO DAS 4 OPERAÇÕES BÁSICAS DA MATEMÁTICA.\n\n");

    wprintf(L"Primeiro número: ");
    scanf("%d", &n1);

    wprintf(L"Segundo número: ");
    scanf(" %d", &n2);

    soma = n1 + n2;
    subt = n1 - n2;
    mult = n1 * n2;
    div = n1 / n2;

    system("cls");

    wprintf(L"O resultado de %d + %d = %d\n", n1, n2, soma);
    wprintf(L"O resultado de %d - %d = %d\n", n1, n2, subt);
    wprintf(L"O resultado de %d * %d = %d\n", n1, n2, mult);
    wprintf(L"O resultado de %d / %d = %d", n1, n2, div);

    getch();
    return 0;
}

