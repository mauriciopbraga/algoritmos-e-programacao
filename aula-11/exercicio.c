#include <stdio.h>
#include <stdlib.h>
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

    system("pause");
    return 0;
}
