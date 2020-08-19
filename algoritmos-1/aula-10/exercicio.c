/*Propagama para monitorar temperatura e umidade de um leito no hospital

Faixa normal de opera��o (temp) = 23�C e 25�C
Faixa normal de opera��o (umid) = 70% e 90%*/
#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    printf("PROGRAMA PARA MONITORAR A TEMPERATURA E UMIDADE DE UM LEITO DE HOSPITAL\n\n");

    float temp, umid;

    printf("Digite a temperatura do quarto: ");
    scanf("%f", &temp);

    fflush(stdin);

    printf("\nDigite a umidade do quarto: ");
    scanf("%f", &umid);

    if((temp >= 23) && (temp <= 25) && (umid >= 70) && (umid <= 90)){
        printf("\nA temperatura e umidade do quarto est�o ok\n");

        return 0;
    }

    printf("\nO a temperatura e umidade do quarto n�o est�o boas\n\n");

    return 0;
}
