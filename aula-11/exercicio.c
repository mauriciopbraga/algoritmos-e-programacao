/*Fazer um programa para ler duas notas, calcular a m�dia entre as duas. Caso o aluno n�o tenha alcan�ado a m�dia 6 dever� ser direcionado ao exame e caso essa nota
seja menor que 5 exibir que o aluno est� reprovado*/

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
        printf("\nVoc� foi aprovado. Sua primeira nota � %.2f, sua segunda nota � %.2f e sua m�dia � %.2f\n\n", nota1, nota2, media);
    }
    else{
        printf("\nVoc� n�o alcan�ou a m�dia. Digite a nota do exame: ");
        scanf("%f", &notaex);

        if(notaex >= 5){
        printf("\nVoc� foi aprovado\n\n");
        }

    else{
        printf("\nVoc� foi reprovado\n\n");
    }
    }
    return 0;
}
