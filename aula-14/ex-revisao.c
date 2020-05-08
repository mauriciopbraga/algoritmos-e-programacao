/*Desenvolver um algoritmo para controle de velocidade / lombada
eletrônica. A velocidade máxima permitida no local é 60 Km/h.
Igual ou abaixo: velocidade normal
Acima: excesso de velocidade (acionar a câmera fotográfica do 
controlador)
No final, exibir a velocidade independente do valor*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    float velocidade;

    printf("Digite a velocidade: ");
    scanf("%f", &velocidade);

    if (velocidade <= 64.8) {
        printf("Velocidade dentro do limite para o trecho\n");
    }
    else {
        printf("Acionando câmera fotográfica do controlador\n");
    }

    printf("Velocidade medida: %.1f\n", velocidade);

    system("pause");
    return 0;
}