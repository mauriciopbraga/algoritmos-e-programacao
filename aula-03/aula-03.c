#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    int valor1=5;
    printf("Valor contido na vari�vel valor1: %d\n", valor1); /*O "%d" pode ser trocado por "%i"*/

    valor1 = 8;
    printf("Novo valor: %d\n", valor1);

    valor1 = valor1 + 2; /*Soma da vari�vel 1 + 2*/
    printf("Valor final: %d\n", valor1);

    system("pause");
    return 0;
}
