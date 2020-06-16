/*solicitar ao usuário a digitação de dez números inteiros. Os números digitados deverão ser armazenados em um vetor.
Após, esse vetor deverá ser ordenado de modo crescente. Por fim, o algoritmo deve apresentar, na tela do computador,
o conteúdo do vetor ordenado. Exemplo: caso o usuário digite os números 3 6 9 8 1 2 4 7 10 5 o algoritmo deve ordenar
e exibir os números em ordem crescente: 1 2 3 4 5 6 7 8 9 10*/

#include <stdio.h>

int main(){

    int i = 0, i2 = 0, ordem, numero[10];

    while(i < 10){
        printf("Digite um numero inteiro: ");
        scanf("%d", &numero[i]);
        i++;
    }
    for(i = 0; i < 10; i++){
        for(i2 = i + 1; i2 < 10; i2++){
            if(numero[i] > numero[i2]){
                ordem = numero[i];
                numero[i] = numero[i2];
                numero[i2] = ordem;
            }
        }
    }
    for(i = 0; i < 10; i++){
        printf("%d ", numero[i]);
    }
    return 0;
}