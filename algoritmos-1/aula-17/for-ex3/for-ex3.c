//Ler dois n�meros e calcular o somat�rio dos n�meros do intervalo (incluindo, no somat�rio, os n�meros lidos)

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");
    
    int num1, num2, maior, menor, soma = 0;

    printf("Digite um n�mero inteiro: ");
    scanf("%d", &num1);
    printf("Digite outro n�mero inteiro: ");
    scanf("%d", &num2);

    if(num1 > num2){
        maior = num1;
        menor = num2;
    }
    else{
        maior = num2;
        menor = num1;
    }
    for(int i = num1; i <= num2; i++){
        soma += i;
    }

    printf("%d\n", soma);

    return 0;
}