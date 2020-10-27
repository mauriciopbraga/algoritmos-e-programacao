/* Desenvolver um algoritmo para solicitar ao usuário 10 números inteiros. Os números pares serão armazenados em um vetor de
pares e os números impares em um vetor de ímpares. Ao final do programa, exiba o conteúdo dos dois vetores. */

#include <stdio.h>

void verificarNumero(int par[3], int impar[3], int numero[3], int i, int j, int k){
    for(i = 0; i < 3; i++){
        if(numero[i] % 2 == 0){
            par[j] = numero [i];
            j++;
        }
        else{
            impar[k] = numero[i];
            k++;
        }
    }
}
void entrada(int par[3], int impar[3], int numero[3], int i){
    
}
void main(int numero[3], int i){
    for(i = 0; i < 3; i++){
        printf("Numero: ");
        scanf("%d", &numero[i]);
    }
    verificarNumero(numero[3]);
}
