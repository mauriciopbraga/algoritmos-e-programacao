#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    int n1, n2, n3, n4;

    wprintf(L"DIGITE QUATRO NÚMEROS INTEIROS PARA VERIFICAR QUAL É A MÉDIA E SE ESSES NÚMEROS SÃO MAIORES QUE ELA.\n\n");

    wprintf(L"Primeiro número: ");
    scanf("%d", &n1);

    wprintf(L"Segundo número: ");
    scanf("%d", &n2);

    wprintf(L"Terceiro número: ");
    scanf("%d", &n3);

    wprintf(L"Quarto número: ");
    scanf("%d", &n4);

    float media = n1 + n2 + n3 + n4 / 4;

    system("cls");

    if(media > n1){
        wprintf(L"%.2f é maior que %d\n", media, n1);
    }

    if(media > n2){
        wprintf(L"%.2f é maior que %d\n", media, n2);
    }

    if(media > n3){
        wprintf(L"%.2f é maior que %d\n", media, n3);
    }

    if(media > n4){
        wprintf(L"%.2f é maior que %d\n", media, n4);
    }

    getch();
    return 0;
}