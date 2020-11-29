/* Realizar um sistema de votação. O sistema deverá ter um menu inicial para 1) votação ou 2) apuração dos resultados.
Caso seja escolhida a opção 1, poderão receber votos o tanto o Candidato A quanto o Candidato B, inclusive o usuário poderá votar quantas vezes desejar.
Na opção 2 (apuração) deverão ser informados quantos votos cada candidato recebeu, quem venceu a votação e qual o percentual de votos para cada um deles. Obs.: Utilizar funções. */

#include <stdio.h>

int opcao;
int numeroCandidato;
float votosCandidatoA = 0, votosCandidatoB = 0, votosNulos = 0;

void separador(){
    printf("\n-----------------------------------------------------\n\n");
}

void entrada(){
    printf("Escolha uma das opcoes: ");
    scanf("%d", &opcao);
    separador();
}

void votacao(){
    printf("Colinha: [1] Candidato A | [2] Candidato B\n\n"); 

    printf("Digite o numero que representa seu candidato: ");
    scanf("%d", &numeroCandidato);

    if(numeroCandidato == 1){
        printf("\nFIM!\n");
        votosCandidatoA++;
        separador();
    }
    if(numeroCandidato == 2){
        printf("\nFIM!\n");
        votosCandidatoB++;;
        separador();
    }
    if(numeroCandidato < 1 || numeroCandidato > 2){
        printf("\nFIM!\n");
        votosNulos++;
        separador();
    }
}

void apuracao(){
    printf("Apuracao dos votos\n\n");
    printf("Votos candidato A: %.0f\n", votosCandidatoA);
    printf("Votos candidato B: %.0f\n", votosCandidatoB);
    printf("Votos nulos: %.0f\n\n", votosNulos);

    if(votosCandidatoA > votosCandidatoB){
        printf("Candidato A ganhou com %.1f%% dos votos\n", votosCandidatoA = (votosCandidatoA / (votosCandidatoA + votosCandidatoB + votosNulos)) * 100);
        exit(0);
    }
    if(votosCandidatoA < votosCandidatoB){
        printf("Candidato B ganhou com %1.f%% dos votos\n", votosCandidatoB = (votosCandidatoB / (votosCandidatoA + votosCandidatoB + votosNulos)) * 100);
        exit(0);
    }
    if(votosCandidatoA == votosCandidatoB && votosCandidatoA != 0 && votosCandidatoB != 0){
        printf("Cada candidato teve 50%% dos votos. Eh necessario um segundo turno\n");
        separador();
        votacao();
    }
    if(votosNulos > votosCandidatoA && votosNulos > votosCandidatoB){
        printf("%.1f%% dos votos foram nulos. Votacao cancelada\n", votosNulos = (votosNulos / (votosCandidatoA + votosCandidatoB + votosNulos)) * 100);
        exit(0);
    }
}

void menuInicial(){
    printf("[1] Votar | [2] Apuracao dos votos\n\n");  

    entrada();
    
    if(opcao == 1){
        votacao();
    }
    if(opcao == 2){
        apuracao();
    }
    while(opcao < 1 || opcao > 2){
        printf("\nOpcao invalida\n");
        entrada();
    }
}

void main(){
    while(1){
        menuInicial();
    }
}