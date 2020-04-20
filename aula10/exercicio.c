#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    printf("O programa irá medir sua temperatura para ver se está apto a entrar no estabelecimento\n\n");

    float temperatura;

    printf("Digite sua temperatura: ");
    scanf("%f", &temperatura);

    system("cls");

    if(temperatura >= 38){
        printf("Sua temperatura está fora dos padrões permitidos\n\n");
    }
    else{
        printf("Sua temperatura está normal\n\n");
    }

    system("pause");
    return 0;
}
