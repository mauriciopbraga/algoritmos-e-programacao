#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    printf("O programa ir� medir sua temperatura para ver se est� apto a entrar no estabelecimento\n\n");

    float temperatura;

    printf("Digite sua temperatura: ");
    scanf("%f", &temperatura);

    system("cls");

    if(temperatura >= 38){
        printf("Sua temperatura est� fora dos padr�es permitidos\n\n");
    }
    else{
        printf("Sua temperatura est� normal\n\n");
    }

    system("pause");
    return 0;
}
