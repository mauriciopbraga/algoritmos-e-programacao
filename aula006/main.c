#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    int idade;

    wprintf(L"Bem-vindo ao sistema!\n");

    wprintf(L"Digite sua idade: \n");
    scanf("%d", &idade); //Interação do usuário

    wprintf(L"A sua idade é: %d", idade);

    getch();
    return 0;
}
