#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    int n1, n2, n3, n4;

    printf("DIGITE QUATRO N�MEROS INTEIROS PARA VERIFICAR QUAL � A M�DIA E SE ESSES N�MEROS S�O MAIORES QUE ELA.\n\n");

    printf("Primeiro n�mero: ");
    scanf("%d", &n1);

    printf("Segundo n�mero: ");
    scanf("%d", &n2);

    printf("Terceiro n�mero: ");
    scanf("%d", &n3);

    printf("Quarto n�mero: ");
    scanf("%d", &n4);

    float media = n1 + n2 + n3 + n4 / 4;

    system("cls");

    if(media > n1){
        printf("%.2f � maior que %d\n", media, n1);
    }

    if(media > n2){
        printf("%.2f � maior que %d\n", media, n2);
    }

    if(media > n3){
        printf("%.2f � maior que %d\n", media, n3);
    }

    if(media > n4){
        printf("%.2f � maior que %d\n", media, n4);
    }

    system("pause");
    return 0;
}
