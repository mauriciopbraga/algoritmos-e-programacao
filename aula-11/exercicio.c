/*Fazer um programa para ler duas notas, calcular a média entre as duas. Caso o aluno não tenha alcançado a média 6 deverá ser direcionado ao exame e caso essa nota
seja menor que 5 exibir que o aluno está reprovado*/

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    float nota1, nota2, notaex;

    printf("Digite sua primeira nota: ");
    scanf("%f", &nota1);

    printf("\nDigite sua segunda nota: ");
    scanf("%f", &nota2);

    float media = (nota1 + nota2) / 2;

    if(media >= 6){
        printf("\nVocê foi aprovado. Sua primeira nota é %.2f, sua segunda nota é %.2f e sua média é %.2f\n\n", nota1, nota2, media);
    }
    else{
        printf("\nVocê não alcançou a média. Digite a nota do exame: ");
        scanf("%f", &notaex);

        if(notaex >= 5){
        printf("\nVocê foi aprovado\n\n");
        }

    else{
        printf("\nVocê foi reprovado\n\n");
    }
    }
    return 0;
}
