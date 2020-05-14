/*Escrever um algoritmo de calculadora. O algoritmo deve ter solicitar ao usuário 2 valores e
uma das operações desejadas para o cálculo (+, -, *, /). De acordo com a operação desejada,
o algoritmo realiza o cálculo e exibe na tela o resultado somente daquela conta específica.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    printf("CALCULADORA\n\n");
    printf("1 - Adição\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");

    int opcao;

    printf("\nSelecione a opção para definir a operação: ");\
    scanf("%d", &opcao);

    if(opcao > 4){
        system("cls");

        printf("Nenhuma das opções foi selecionada.");
    }

    float n1, n2, total;

    printf("\nDigite o primeiro número: ");
    scanf("%f", &n1);
    printf("\nDigite o segundo número: ");
    scanf("%f", &n2);

    system("cls");

    switch(opcao){
        case 1:
            total = n1 + n2;
            printf("%.1f + %.1f = %.1f\n", n1, n2, total);
            break;

        case 2:
            total = n1 - n2;
            printf("%.1f - %.1f = %.1f\n", n1, n2, total);
            break;

        case 3:
            total = n1 * n2;
            printf("%.1f * %.1f = %.1f\n", n1, n2, total);
            break;

        case 4:
            total = n1 / n2;
            printf("%.1f / %.1f = %.1f\n", n1, n2, total);
            break;
    }

    system("pause");
    return 0;
}