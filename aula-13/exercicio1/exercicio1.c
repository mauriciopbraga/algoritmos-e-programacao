//Tipos de triângulos
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    int lado1, lado2, lado3;

    printf("Digite o do lado 1 do triângulo: ");
    scanf("%d", &lado1);
    printf("Digite o do lado 2 do triângulo: ");
    scanf("%d", &lado2);
    printf("Digite o do lado 3 do triângulo: ");
    scanf("%d", &lado3);

    if(((lado1 + lado2) >= lado3) && ((lado1 + lado3) >= lado2) && ((lado2 + lado3) >= lado1)){
          if((lado1 == lado2) && (lado2 == lado3) && (lado3 == lado1)){
              printf("Triângulo do tipo equilátero\n");
          }
          else if((lado1 == lado2) || (lado2 == lado3) || (lado3 == lado1)){
              printf("Triângulo do tipo isósceles\n");
          }
          else if((lado1 != lado2) && (lado2 != lado3) && (lado3 != lado1)){
              printf("Triângulo do tipo Escaleno\n");
          }
          else{
              printf("Não é um triângulo\n");
          }
    }

    system("pause");
    return 0;
}
