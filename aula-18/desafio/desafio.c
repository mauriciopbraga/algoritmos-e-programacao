//Somar uma sequ�ncia de n�meros digitados enquanto os n�meros s�o diferentes de zero

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL , "portuguese");

        int num = 1, soma = 0;

        while(num != 0){
            printf("Digite um n�mero: ");
            scanf("%d", &num);

            soma = soma + num;

            printf("%d\n", soma);
        }
    return 0;
}
