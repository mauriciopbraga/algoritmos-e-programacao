#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    int idade;

    printf("Bem-vindo ao sistema!\n");

    printf("Digite sua idade: ");
    scanf("%d", &idade); //Intera��o do usu�rio

    printf("A sua idade �: %d\n", idade);

    system("pause");
    return 0;
}
