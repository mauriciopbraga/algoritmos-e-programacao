//Construir um algoritmo para ler um valor numérico e calcular e escrever o seu fatorial

#include <stdio.h>

int main(){

    int num, fatorial = 1, i;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);
    	
    i = num;

    printf("%d! = ", num);

    while( i > 0){
        printf("%d ", i);
        fatorial = fatorial * i--;

        if(i > 0){
            printf("x ");
        }
        else{
            printf("= ");
        }
    }
    printf("%d\n", fatorial);
    
    return 0;
}