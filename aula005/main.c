#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    //Váriaveis
    int idade = 18;
    float salario = 985.56;
    char genero = 'M';

    wprintf(L"Idade: %d\n", idade);
    wprintf(L"Salário: %.2f\n", salario); //"%.2f casas depois da vírgula
    wprintf(L"Gênero: %c\n", genero);

    idade = 20;

    wprintf(L"Idade: %d\n", idade);

    system(L"pause");
    return 0;
}
