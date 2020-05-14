/*Escrever um algoritmo de calculadora. O algoritmo deve ter solicitar ao usu�rio 2 valores e
uma das opera��es desejadas para o c�lculo (+, -, *, /). De acordo com a opera��o desejada,
o algoritmo realiza o c�lculo e exibe na tela o resultado somente daquela conta espec�fica.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    printf("CALCULADORA\n\n");
    printf("1 - Adi��o\n");
    printf("2 - Subtra��o\n");
    printf("3 - Multiplica��o\n");
    printf("4 - Divis�o\n");

    int opcao;

    printf("\nSelecione a op��o para definir a opera��o: ");\
    scanf("%d", &opcao);

    if(opcao > 4){
        system("cls");

        printf("Nenhuma das op��es foi selecionada.");
    }

    float n1, n2, total;

    printf("\nDigite o primeiro n�mero: ");
    scanf("%f", &n1);
    printf("\nDigite o segundo n�mero: ");
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