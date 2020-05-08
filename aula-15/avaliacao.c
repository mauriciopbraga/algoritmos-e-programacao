/*realizar a o c�lculo do IMC (�ndice de Massa Corporal) de uma pessoa, cuja f�rmula do c�lculo � dividir o peso pela altura elevada ao quadrado. Dessa forma o algoritmo deve solicitar, ao usu�rio, os valores de peso em kg (exemplo: 82.5) e altura em metros (exemplo: 1.76) e aplicar o c�lculo. Al�m disso, de acordo com o resultado do c�lculo do IMC, dever� ser apresentada, na tela do computador, uma mensagem correspondente. Para isso, considere as seguintes mensagens de acordo com o IMC encontrado:

IMC / Mensagem

Menos do que 18.5 / Abaixo do peso
Entre 18.5 e 24.9 / Peso normal
Entre 25 e 29.9	/ Sobrepeso
Entre 30 e 34.9	/ Obesidade grau 1
Entre 35 e 39.9	/ Obesidade grau 2
Mais do que 40	/ Obesidade grau 3*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    float peso, altura, imc;

    printf("Qual � seu peso? ");
    scanf("%f", &peso);
    printf("Qual � a sua altura? ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    if(imc < 18.5){
        printf("Voc� est� abaixo do peso\n");
    }
    else if(imc >= 18.5){
        printf("Voc� est� com o peso normal\n");
    }
    else if(imc >= 25){
        printf("Voc� est� com sobrepeso\n");
    }
    else if(imc >= 30){
        printf("Voc� est� com obesidade de primeiro grau\n");
    }
    else if(imc >= 35){
        printf("Voc� est� com obesidade de segundo grau\n");
    }
    else if(imc >= 40){
        printf("Voc� est� com obesidade de terceiro grau\n");
    }
    
    system("pause");
    return 0;
}