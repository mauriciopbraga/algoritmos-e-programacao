#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    /*Variáveis*/
    int idade = 17;
    printf("Idade: %d\n", idade);

    system("pause");
    return 0;
}
