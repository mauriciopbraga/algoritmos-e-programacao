#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int main(){

    setlocale(LC_ALL, "portuguese");

   int n1, n2, n3, maior, menor;

    wprintf(L"DIGITE TRÊS NÚMEROS INTEIROS PARA VERIFICAR QUAL É O MAIOR E QUAL É O MENOR.\n\n");

    wprintf(L"Primeiro número: ");
    scanf("%d", &n1);
    maior = n1;
    menor = n1;

    wprintf(L"Segundo número: ");
    scanf(" %d", &n2);
    if(n2 > maior) maior = n2;
    if(n2 < menor) menor = n2;

    wprintf(L"Terceiro número: ");
    scanf(" %d", &n3);
    if(n3 > maior) maior = n3;
    if(n3 < menor) menor = n3;

    system("cls");

    wprintf(L"O maior valor é %d.\n", maior);
    wprintf(L"O menor valor é %d.\n", menor);

    getch();
    return 0;
}