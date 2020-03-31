#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    float comp, larg, profund, volume;

    wprintf(L"CALCULADORA DE VOLUME DE ÁGUA DE UMA PISCINA.\n\n");

    wprintf(L"Digite o comprimento da piscina: ");
    scanf("%f", &comp);

    wprintf(L"Digite a largura da piscina: ");
    scanf(" %f", &larg);

    wprintf(L"Digite a profundidade da piscina: ");
    scanf(" %f", &profund);

    volume = comp * larg * profund;

    system("cls");

    wprintf(L"O volume de água da piscina é %.2fm³", volume);

    getch();
    return 0;
}
