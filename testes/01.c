#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    printf("CALCULADORA\n\n");
    printf("+ - Adição\n");
    printf("- - Subtração\n");
    printf("* - Multiplicação\n");
    printf("/ - Divisão\n");

    char opcao;

    printf("\nSelecione a opção para definir a operação: ");\
    scanf("%c", &opcao);

    float n1, n2, total;

    printf("\nDigite o primeiro número: ");
    scanf("%f", &n1);
    printf("\nDigite o segundo número: ");
    scanf("%f", &n2);

    system("cls");

    switch(opcao){
        case '+':
            total = n1 + n2;
            printf("%.1f + %.1f = %.1f\n", n1, n2, total);
        break;

        case '-':
            total = n1 - n2;
            printf("%.1f - %.1f = %.1f\n", n1, n2, total);
        break;

        case '*':
            total = n1 * n2;
            printf("%.1f * %.1f = %.1f\n", n1, n2, total);
        break;

        case '/':
            total = n1 / n2;
            printf("%.1f / %.1f = %.1f\n", n1, n2, total);
        break;
    }

    system("pause");
    return 0;
}