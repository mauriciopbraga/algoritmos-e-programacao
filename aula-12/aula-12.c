#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    float valor1, valor2, result;
    int opcao;

    printf("Digite o valor 1: ");
    scanf("%f", &valor1);

    printf("Digite o valor 2: ");
    scanf("%f", &valor2);

    fflush(stdin);

    printf("Digite 1 - Soma, 2 - Subtração, 3 - Multiplicação, 4 - divisão: ");
    scanf("%d", &opcao);

    if(opcao == 1){
        result = valor1 + valor2;
        printf("%.1f + %.1f = %.1f\n\n", valor1, valor2, result);
    }
    else if(opcao == 2){
            result = valor1 - valor2;
            printf("%.1f - %.1f = %.1f\n\n", valor1, valor2, result);
    }
    else if(opcao == 3){
            result = valor1 * valor2;
            printf("%.1f x %.1f = %.1f\n\n", valor1, valor2, result);
    }
    else if(opcao == 4){
            result = valor1 / valor2;
            printf("%.1f / %.1f = %.1f\n\n", valor1, valor2, result);
    }
    else{
        printf("Nenhuma das opções foi selecionada\n\n");
    }

    return 0;
}
