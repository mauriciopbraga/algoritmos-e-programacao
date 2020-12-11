/* Efetuar o log/registro das operações aritméticas entre 2 números. O algoritmo deve, também,
efetuar a leitura do log quando o usuário desejar/informar um código de recuperação de log. */

#include <stdio.h>

float n1, n2;
int opcao;

void separador(){
    printf("\n-----------------------------------------------------\n\n");
}

void calculadora(float n1, float n2){
    printf("\n%.2f + %.2f = %.2f\n", n1, n2, n1 + n2);
    printf("%.2f - %.2f = %.2f\n", n1, n2, n1 - n2);
    printf("%.2f * %.2f = %.2f\n", n1, n2, n1 * n2);
    printf("%.2f / %.2f = %.2f\n", n1, n2, n1 / n2);
}

void calcLog(){
    FILE *logs;
    logs = fopen("logs.txt", "a");

    fprintf(logs, "%.2f + %.2f = %.2f\n", n1, n2, n1 + n2);
    fprintf(logs, "%.2f - %.2f = %.2f\n", n1, n2, n1 - n2);
    fprintf(logs, "%.2f * %.2f = %.2f\n", n1, n2, n1 * n2);
    fprintf(logs, "%.2f / %.2f = %.2f\n\n", n1, n2, n1 / n2);
    fclose(logs);
}

void menu(){
    printf("[1] Calculadora | [2] Gerar registros\n\n");

    printf("Digite uma opcao: ");
    scanf("%d", &opcao);

    separador();

    if(opcao == 1){
        printf("Numero: ");
        scanf("%f", &n1);
        printf("Numero: ");
        scanf("%f", &n2);

        calculadora(n1, n2);

        separador();
    }
    if(opcao == 2){
        printf("Os registros foram gerados no arquivo logs.txt\n");
        calcLog();
        separador();
    }
    while(opcao < 1 || opcao > 2){
        printf("Opcao nao existente!\n");
        return menu();
        separador();
    }
}

void main(){
    while(1){
        menu();
    }
}