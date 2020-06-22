//Projeto final
//Timer / Cronômetro

#include <stdio.h>
#include <stdlib.h>
#include <windows.h> //Biblioteca para usar o comando Sleep

int main(){

    int horas = 0, minutos = 0, segundos = 0;

    while(1){
        printf("\n[%.2d:%.2d:%.2d]", horas, minutos, segundos);
        Sleep(1000); //Básicamente o Sleep funciona para pausar os atuais digitos exibidos na tela em milissegundos. No caso, 1000 equivalente a 1 segundo 
        system("cls");
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