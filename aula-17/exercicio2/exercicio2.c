//Desenvolver um algoritmo para ler um número menor que 1000, calcular e mostrar todos os números ímpares maiores que o número lido e menores que 1000

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    int numero;
    
    printf("Digite um número inteiro menor que 1000: ");
    scanf("%d", &numero);

    if(numero < 1000){
        for(int i = numero + 1; i < 1000; i++){
            if(i % 2 == 1){
                printf("%d\n", i);
            }
        }
    }
    else{
        printf("Número maior que 1000.\n");
    }

    system("pause");
    return 0;
}