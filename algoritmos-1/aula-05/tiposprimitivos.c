#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    //V�riaveis
    int idade = 18;
    float salario = 985.56;
    char genero = 'M';

    printf("Idade: %d\n", idade);
    printf("Sal�rio: %.2f\n", salario); //"%.2f casas depois da v�rgula
    printf("G�nero: %c\n", genero);

    idade = 20;

    printf("Idade: %d\n", idade);

    system("pause");
    return 0;
}
