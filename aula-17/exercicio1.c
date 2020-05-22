//Escrever um algoritmo para calcular e escrever a tabuada dos números de 1 a 10.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    int tabuada;

    printf("Digite a tabuada que deseja exibir: ");
    scanf("%d", &tabuada);

    system("cls");

    int i;

    for(i = 1; i <= 10; i++){
        printf("%d * %d = %d\n", i, tabuada, i * tabuada);
    }

    system("pause");
    return 0;
}