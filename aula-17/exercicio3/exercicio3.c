//Ler dois n�meros e calcular o somat�rio dos n�meros do intervalo (incluindo, no somat�rio, os n�meros lidos)

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    int num1, num2;

    printf("Digite um n�mero inteiro: ");
    scanf("%d", &num1);
    printf("Digite outro n�mero inteiro: ");
    scanf("%d", &num2);

    

    system("pause");
    return 0;
}