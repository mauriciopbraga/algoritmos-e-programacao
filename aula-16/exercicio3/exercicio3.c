/*Escrever um algoritmo para oferecer ao usuário a possibilidade de calcular a velocidade média, a distância percorrida e/ou o tempo gasto. Sempre que o usuário escolher uma das opções, deverá informar ao sistema as outras duas informações. Exemplo: caso o usuário escolha saber a velocidade média, ele precisará informar o tempo e a distância percorrida, para a aplicação da fórmula e a exibição do resultado.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    printf("Escolha qual das equações deseja calcular:\n");
    printf("1 - Veleciodade Média;\n");
    printf("2 - Distância Percorrida;\n");
    printf("3 - Tempo gasto.\n\n");

    int opcao;
    
    printf("Digite o número de uma das 3 opções para selecionar: ");
    scanf("%d", &opcao);

    if(opcao > 3){
        system("cls");
        printf("Nenhuma das 3 opções foi selecionada.\n");
    }

    system("cls");

    float vm, dp, tg;

    switch(opcao){
        case 1:{
            printf("Digite a distância percorrida: ");
            scanf("%f", &dp);
            printf("Digite o tempo gasto: ");
            scanf("%f", &tg);

            vm = dp / tg;

            printf("A velocidade média é igual a %.2f m/s\n", vm);
            break;
        }
        case 2:{
            printf("Digite a velocidade média: ");
            scanf("%f", &vm);
            printf("Digite o tempo gasto: ");
            scanf("%f", &tg);

            dp = vm * tg;

            printf("A distância percorrida é igual a %.2f m\n", dp);
            break;
        }
        case 3:{
            printf("Digite a velocidade média: ");
            scanf("%f", &vm);
            printf("Digite a distância percorrida: ");
            scanf("%f", &dp);

            tg = dp / vm;

            printf("A distância percorrida é igual a %.2f s\n", tg);
            break;
        }
    }

    system("pause");
    return 0;
}