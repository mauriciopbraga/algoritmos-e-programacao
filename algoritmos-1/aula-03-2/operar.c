#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    int numero1, numero2, total;
    numero1=2;
    numero2=7;
    total=numero1+numero2;
    printf("Conta realizada %d + %d = %d\n", numero1, numero2, total);

    return 0;
}
