#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    //Váriaveis
    int idade = 18;
    float salario = 985.56;
    char genero = 'M';

    printf("Idade: %d\n", idade);
    printf("Salário: %.2f\n", salario); //"%.2f casas depois da vírgula
    printf("Gênero: %c\n", genero);

    idade = 20;

    printf("Idade: %d\n", idade);

    system("pause");
    return 0;
}
