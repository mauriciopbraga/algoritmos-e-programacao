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
            printf("� vogal\n");
            break;

        case 'e':
            printf("� vogal\n");
            break;

        case 'i':
            printf("� vogal\n");
            break;

        case 'o':
            printf("� vogal\n");
            break;

        case 'u':
            printf("� vogal\n");
            break;

        default:
            printf("N�o � uma vogal\n");
            break;
    }

    system("pause");
    return 0;   
}