#include <stdio.h>

int main(){

    int v1 = 15;
    int v2 = 5;
    int v3 = 20;
    int resultado;

    //EXERCÍCIOS:

    //Imprimir, na tela do computador, os resultados dos
    //seguintes relaciomentos:


    //1) OPERADORES RELACIONAIS


    //1a) v1 é igual a v2?

    printf("%d == %d: %d\n", v1, v2, v1 == v2);

    //1b) v1 é menor ou igual a v2?

    printf("%d <= %d: %d\n", v1, v2, v1 <= v2);

    //1c) v2 é maior que v3?

    printf("%d > %d: %d\n", v2, v3, v2 > v3);

    //1d) v3 é menor que v1?

    printf("%d < %d: %d\n", v3, v1, v3 < v1);

    //1e) v2 é menor ou igual a v3?

    printf("%d <= %d: %d\n", v2, v3, v2 <= v3);

    //1f) v3 é maior que v1?

    printf("%d > %d: %d\n", v3, v1, v3 < v1);

    //1g) v3 é menor que v2?

    printf(L"%d < %d: %d\n", v3, v2, v3 < v2);


    //2 OPERADORES LÓGICOS


    //2a) v1 é maior que v2 e v1 é maior que v3?

    resultado = (v1 > v2) && (v1 > v3);
    printf("(%d > %d) && (%d > %d): %d\n", v1, v2, v1, v3, resultado);

    //2b) v1 é igual a v2 e v1 é menor que v3?

    resultado = (v1 == v2) && (v1 < v3);
    printf("(%d = %d) && (%d < %d): %d\n", v1, v2, v1, v3, resultado);

    //2c) v1 é maior que v2 e v1 é menor que v3?

    resultado = (v1 > v2) && (v1 < v3);
    printf("(%d > %d) && (%d < %d): %d\n", v1, v2, v1, v3, resultado);

    //2d) v2 é menor que v3 e v3 é maior que v1?

    resultado = (v2 < v3) && (v3 > v1);
    printf("(%d < %d) && (%d > %d): %d\n", v2, v3, v3, v1, resultado);

    //2e) v3 é maior que v2 ou v1 é maior que v2?

    resultado = (v3 > v2) || (v1 > v2);
    printf("(%d > %d) || (%d > %d): %d\n", v3, v2, v1, v2, resultado);

    //2f) v2 é maior que v1 ou v2 é menor que v3?

    resultado = (v2 > v1) || (v2 < v3);
    printf("(%d > %d) || (%d < %d): %d\n", v2, v1, v2, v3, resultado);

    //2g) v3 é menor que v1 ou v3 é maior que v2?

    resultado = (v3 < v1) || (v3 > v2);
    printf("(%d < %d) || (%d > %d): %d\n", v3, v1, v3, v2, resultado);

    return 0;
}
