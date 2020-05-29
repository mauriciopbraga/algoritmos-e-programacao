//Contar a quantidade de números pares e ímpares digitados por um usuário enquanto o número for diferente de zero

#include <stdio.h>

int main(){

    int num = 1, par = 0, impar = 0;

    while(num != 0){
        printf("Digite um numero: ");
        scanf("%d", &num);

        if(num % 2 == 0){
            par = par + 1;
            printf("%d\n", par);
        }
        else{
            impar = impar + 1;
            printf("%d\n", impar);
        }
    }
    return 0;
}
