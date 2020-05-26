//Ler dois números e calcular o somatório dos números do intervalo (incluindo, no somatório, os números lidos)

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    int num1, num2;

    printf("Digite um número inteiro: ");
    scanf("%d", &num1);
    printf("Digite outro número inteiro: ");
    scanf("%d", &num2);

    

    system("pause");
    return 0;
}