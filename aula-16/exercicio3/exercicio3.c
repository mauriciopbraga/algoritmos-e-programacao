/*Escrever um algoritmo para oferecer ao usu�rio a possibilidade de calcular a velocidade m�dia, a dist�ncia percorrida e/ou o tempo gasto. Sempre que o usu�rio escolher uma das op��es, dever� informar ao sistema as outras duas informa��es. Exemplo: caso o usu�rio escolha saber a velocidade m�dia, ele precisar� informar o tempo e a dist�ncia percorrida, para a aplica��o da f�rmula e a exibi��o do resultado.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    printf("Escolha qual das equa��es deseja calcular:\n");
    printf("1 - Veleciodade M�dia;\n");
    printf("2 - Dist�ncia Percorrida;\n");
    printf("3 - Tempo gasto.\n\n");

    int opcao;
    
    printf("Digite o n�mero de uma das 3 op��es para selecionar: ");
    scanf("%d", &opcao);

    if(opcao > 3){
        system("cls");
        printf("Nenhuma das 3 op��es foi selecionada.\n");
    }

    system("cls");

    float vm, dp, tg;

    switch(opcao){
        case 1:{
            printf("Digite a dist�ncia percorrida: ");
            scanf("%f", &dp);
            printf("Digite o tempo gasto: ");
            scanf("%f", &tg);

            vm = dp / tg;

            printf("A velocidade m�dia � igual a %.2f m/s\n", vm);
            break;
        }
        case 2:{
            printf("Digite a velocidade m�dia: ");
            scanf("%f", &vm);
            printf("Digite o tempo gasto: ");
            scanf("%f", &tg);

            dp = vm * tg;

            printf("A dist�ncia percorrida � igual a %.2f m\n", dp);
            break;
        }
        case 3:{
            printf("Digite a velocidade m�dia: ");
            scanf("%f", &vm);
            printf("Digite a dist�ncia percorrida: ");
            scanf("%f", &dp);

            tg = dp / vm;

            printf("A dist�ncia percorrida � igual a %.2f s\n", tg);
            break;
        }
    }

    system("pause");
    return 0;
}