# include <stdlib.h>
# include <stdio.h>

int main() {
    /*
    int idade;
    idade = 18;
    printf("Idade: %d\n", idade);

 

    int vetor[3]; // vetor[3] --> |0| |1| |2|
    vetor[0] = 19;
    vetor[1] = 20;
    vetor[2] = 25;
    printf("Vetor[0]: %d   Vetor[1]: %d   Vetor[2]: %d\n", vetor[0], vetor[1], vetor[2]);
    printf("O que ha na posicao 1 do vetor? Resposta: %d\n", vetor[1]);
    */
    
    /*
    int idade[5]; // tamanho do vetor eh 5, porem as posicoes/indices vao de 0 ate 4
    int i;
    for(i=0; i<5; i++) {
        printf("Digite a idade %d:\n", (i+1));
        scanf("%d", &idade[i]);
    }
    
    for(i=0; i<5; i++) {
        printf("Conteudo do Vetor:%d\n", idade[i]);
    }
    */
    
    char vogal[5];
    vogal[0] = 'a';
    vogal[1] = 'e';
    vogal[2] = 'i';
    vogal[3] = 'o';
    vogal[4] = 'u';
    
    printf("Conteudo da segunda posicao do vetor vagal: %c\n", vogal[1]);
    printf("Conteudo da ultima posição (tamanho -1) do vetor vagal: %c\n", vogal[4]);
   
    return 0;
}