#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    int idade;
    char genero;
    float salario;

    //idade
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    //genero
    printf("Digite seu gênero: ");
    scanf(" %c", &genero);

    //salario
    printf("Digite seu salário: ");
    scanf("%f", &salario);

    system("cls");

    printf("Sua idade é: %d\nSeu gênero é: %c\nSeu salário é: %f", idade, genero, salario);

    getch();
    return 0;
}
