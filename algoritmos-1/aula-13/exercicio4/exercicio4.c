/*Escreva um algoritmo para ler o salário mensal de um funcionário e calcule o desconto do INSS, levando em consideração a tabela abaixo:


Salário / Alíquota

até R$ 1.200,00 / 8,00 %
de R$ 1.200,01 a R$ 2.300,00 / 9,00 %
A partir de R$ 2.300,01 / 11,00 %*/

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
