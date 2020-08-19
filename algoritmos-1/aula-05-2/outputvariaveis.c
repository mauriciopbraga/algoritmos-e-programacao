#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    int idade = 18;
    int peso = 50;
    char nome = 'M';

    printf("Sua idade é: %d\n", idade);
    printf("Seu peso é: %dkg\n", peso);
    printf("Seu nome é: %c\n", nome);

    getch();
    system("cls");

    idade = 10;
    peso = 40;
    nome = 'J';

    printf("Sua idade é: %d\n", idade);
    printf("Seu peso é: %dkg\n", peso);
    printf("Seu nome é: %c\n", nome);

    system("pause");
    return 0;
}
