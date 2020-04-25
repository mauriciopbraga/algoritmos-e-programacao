#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    int idade;

    printf("Bem-vindo ao sistema!\n");

    printf("Digite sua idade: ");
    scanf("%d", &idade); //Interação do usuário

    printf("A sua idade é: %d\n", idade);

    system("pause");
    return 0;
}
