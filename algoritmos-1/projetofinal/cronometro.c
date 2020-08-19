//Projeto final
//Timer / Cronômetro [h:min:s]

#include <stdio.h>
#include <stdlib.h>

int main(){

    int horas = 0, minutos = 0, segundos = 0;

    //While setado com a condição 1 significa verdadeiro, ou seja, sempre será executado
    while(1){
        printf("\n[%.2d:%.2d:%.2d]", horas, minutos, segundos);
        usleep(1000000); //Básicamente o usleep funciona para pausar os atuais digitos exibidos na tela em microssegundos. No caso, 1000000 equivalente a 1 segundo 
        system("clear");
        segundos++;

        if(segundos == 60){
            segundos = 0;
            minutos++;
        }
        if(minutos == 60){
            minutos = 0;
            horas++;
        }
        if(horas == 24){
            horas = 0;
        }
    }

    return 0;
}