#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

   int n1, n2, n3, maior, menor;

    printf("DIGITE TR�S N�MEROS INTEIROS PARA VERIFICAR QUAL � O MAIOR E QUAL � O MENOR.\n\n");

    printf("Primeiro n�mero: ");
    scanf("%d", &n1);
    maior = n1;
    menor = n1;

    printf("Segundo n�mero: ");
    scanf(" %d", &n2);
    if(n2 > maior) maior = n2;
    if(n2 < menor) menor = n2;

    printf("Terceiro n�mero: ");
    scanf(" %d", &n3);
    if(n3 > maior) maior = n3;
    if(n3 < menor) menor = n3;

    system("cls");

    printf("O maior valor � %d.\n", maior);
    printf("O menor valor � %d.\n", menor);

    system("pause");
    return 0;
}
