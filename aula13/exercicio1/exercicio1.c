//Tipos de tri�ngulos
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    int lado1, lado2, lado3;

    printf("Digite o do lado 1 do tri�ngulo: ");
    scanf("%d", &lado1);
    printf("Digite o do lado 2 do tri�ngulo: ");
    scanf("%d", &lado2);
    printf("Digite o do lado 3 do tri�ngulo: ");
    scanf("%d", &lado3);

    if(((lado1 + lado2) >= lado3) && ((lado1 + lado3) >= lado2) && ((lado2 + lado3) >= lado1)){
          if((lado1 == lado2) && (lado2 == lado3) && (lado3 == lado1)){
              printf("Tri�ngulo do tipo equil�tero\n");
          }
          else if((lado1 == lado2) || (lado2 == lado3) || (lado3 == lado1)){
              printf("Tri�ngulo do tipo is�sceles\n");
          }
          else if((lado1 != lado2) && (lado2 != lado3) && (lado3 != lado1)){
              printf("Tri�ngulo do tipo Escaleno\n");
          }
          else{
              printf("N�o � um tri�ngulo\n");
          }
    }

    system("pause");
    return 0;
}
