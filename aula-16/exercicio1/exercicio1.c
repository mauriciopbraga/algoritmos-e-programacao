#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    char vogal;

    printf("Digite uma vogal: ");
    scanf("%c", &vogal);

    switch(vogal){
        case 'a':
            printf("É vogal\n");
            break;

        case 'e':
            printf("É vogal\n");
            break;

        case 'i':
            printf("É vogal\n");
            break;

        case 'o':
            printf("É vogal\n");
            break;

        case 'u':
            printf("É vogal\n");
            break;

        default:
            printf("Não é uma vogal\n");
            break;
    }

    system("pause");
    return 0;   
}