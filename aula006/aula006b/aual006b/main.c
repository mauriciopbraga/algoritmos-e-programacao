#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    char vogal;

    printf("Digite uma vogal: \n");
    scanf("%c", &vogal);

    char vogal2;

    printf("Digite outra vogal: \n");
    scanf(" %c", &vogal2); //Dar o primeiro espa�o para

    printf("As vogais digitadas s�o %c e %c\n", vogal, vogal2);

    getch();
    return 0;
}
