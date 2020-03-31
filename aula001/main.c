#include <stdio.h>
#include <stdlib.h>
#include <locale.h> /*Declara  os caracteres especiais*/

int main() {

    setlocale(LC_ALL, "portuguese"); /*Seta o idioma*/

    wprintf(L"Olá, mundo.\nMeu nome é Mauricio!\n"); /*Imprime o texto na tela*/
    
    system("pause"); /*Pausa o texto na tela*/
    return 0; /*Retorna ao início*/
}
