#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    int idade;
    char genero;
    float salario;

    //idade
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    //genero
    printf("Digite seu g�nero: ");
    scanf(" %c", &genero);

    //salario
    printf("Digite seu sal�rio: ");
    scanf("%f", &salario);

    system("cls");

    printf("Sua idade �: %d\nSeu g�nero �: %c\nSeu sal�rio �: %f", idade, genero, salario);

    getch();
    return 0;
}
