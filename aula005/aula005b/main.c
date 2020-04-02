#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    int idade = 18;
    int peso = 50;
    char nome = 'M';

    wprintf(L"Sua idade é: %d\n", idade);
    wprintf(L"Seu peso é: %dkg\n", peso);
    wprintf(L"Seu nome é: %c\n", nome);

    getch();
    system("cls");

    idade = 10;
    peso = 40;
    nome = 'J';

    wprintf(L"Sua idade é: %d\n", idade);
    wprintf(L"Seu peso é: %dkg\n", peso);
    wprintf(L"Seu nome é: %c\n", nome);

    getch();
    return 0;
}
