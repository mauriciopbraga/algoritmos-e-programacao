/*solicitar ao usuário do sistema a digitação das 5 vogais. O algoritmo deverá verificar se o caractere digitado é realmente uma vogal.
Caso positivo, armazenar no vetor de vogais e no final do algoritmo, exibir na tela o conteúdo desse vetor*/

#include <stdio.h>

int main(){
    
    char vogal[5];
    char digito;
    int i = 0;

     while(i < 5){
        printf("Digite as 5 vogais uma a uma: ");
        scanf(" %c", &digito);
        
        if((digito == 'a') || (digito == 'e') || (digito == 'i') || (digito =='o') || (digito == 'u')){
            vogal[i] = digito;
            i++;
        }
     }
    for(i = 0; i < 5; i++){
        printf("%c ", vogal[i]);
    }

    return 0;
}