#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    float comp, larg, profund, volume;

    printf("CALCULADORA DE VOLUME DE �GUA DE UMA PISCINA.\n\n");

    printf("Digite o comprimento da piscina: ");
    scanf("%f", &comp);

    printf("Digite a largura da piscina: ");
    scanf(" %f", &larg);

    printf("Digite a profundidade da piscina: ");
    scanf(" %f", &profund);

    volume = comp * larg * profund;

    system("cls");

    printf("O volume de �gua da piscina � %.2fm�\n", volume);

    system("pause");
    return 0;
}
