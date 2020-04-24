//Exercício do INSS

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    float salario, desconto, salarioliq;

    printf("Digite seu salário: ");
    scanf("%f", &salario);

    system("cls");

    if(salario <= 1200){
        printf("Seu salario é de R$ %.2f\n\n", salario);
        printf("O percentual de desconto é de 8%%\n\n");

        desconto = (salario * 8) / 100;

        printf("O desconto do INSS é de R$ %.2f\n\n", desconto);

        salarioliq = salario - desconto;

        printf("O salário líquido é de R$ %.2f\n\n", salarioliq);
    }

     else if(salario >= 1200,01){
        printf("Seu salario é de R$ %.2f\n\n", salario);
        printf("O percentual de desconto é de 9%%\n\n");

        desconto = (salario * 9) / 100;

        printf("O desconto do INSS é de R$ %.2f\n\n", desconto);

        salarioliq = salario - desconto;

        printf("O salário líquido é de R$ %.2f\n\n", salarioliq);
    }

    else if(salario >= 2300,01){
        printf("Seu salario é de R$ %.2f\n\n", salario);
        printf("O percentual de desconto é de 11%%\n\n");

        desconto = (salario * 11) / 100;

        printf("O desconto do INSS é de R$ %.2f\n\n", desconto);

        salarioliq = salario - desconto;

        printf("O salário líquido é de R$ %.2f\n\n", salarioliq);
    }

    system("pause");
    return 0;
}
