/*INDENTAÇÃO (DAR UMA OLHADA)*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    int valor1=5;
    Wprintf(L"Valor contido na variável valor1: %d\n", valor1); /*O "%d" pode ser trocado por "%i"*/

    valor1 = 8;
    wprintf(L"Novo valor: %d\n", valor1);

    valor1=valor1 + 2; /*Soma da variável 1 + 2*/
    wprintf(L"Valor final: %d\n", valor1);

    system("pause");
    return 0;
}
