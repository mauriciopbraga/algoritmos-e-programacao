#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    float comp, larg, profund, volume;

    printf("CALCULADORA DE VOLUME DE ÁGUA DE UMA PISCINA.\n\n");

    printf("Digite o comprimento da piscina: ");
    scanf("%f", &comp);

    printf("Digite a largura da piscina: ");
    scanf(" %f", &larg);

    printf("Digite a profundidade da piscina: ");
    scanf(" %f", &profund);

    volume = comp * larg * profund;

    system("cls");

    printf("O volume de água da piscina é %.2fm³\n", volume);

    system("pause");
    return 0;
}
