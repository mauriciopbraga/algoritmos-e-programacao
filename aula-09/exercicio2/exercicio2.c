#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    int n1, n2, n3, n4;

    printf("DIGITE QUATRO NÚMEROS INTEIROS PARA VERIFICAR QUAL É A MÉDIA E SE ESSES NÚMEROS SÃO MAIORES QUE ELA.\n\n");

    printf("Primeiro número: ");
    scanf("%d", &n1);

    printf("Segundo número: ");
    scanf("%d", &n2);

    printf("Terceiro número: ");
    scanf("%d", &n3);

    printf("Quarto número: ");
    scanf("%d", &n4);

    float media = n1 + n2 + n3 + n4 / 4;

    system("cls");

    if(media > n1){
        printf("%.2f é maior que %d\n", media, n1);
    }

    if(media > n2){
        printf("%.2f é maior que %d\n", media, n2);
    }

    if(media > n3){
        printf("%.2f é maior que %d\n", media, n3);
    }

    if(media > n4){
        printf("%.2f é maior que %d\n", media, n4);
    }

    system("pause");
    return 0;
}
