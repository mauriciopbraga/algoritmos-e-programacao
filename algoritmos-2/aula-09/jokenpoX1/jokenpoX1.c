// Pedra, papel ou tesoura player X player

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <windows.h>

int jogadaJogador1, jogadaJogador2;
int pontosJogador1 = 0, pontosJogador2 = 0;
char nomeJogador1[30], nomeJogador2[30];

void nomes(){
	printf("Jogador 1 Digite seu nome: ");
	scanf("%s", nomeJogador1);
	printf("\n");

    printf("Jogador 2 Digite seu nome: ");
	scanf("%s", nomeJogador2);
	printf("\n");
}

void entrada(){
	printf("\n%s escolha: ", nomeJogador1);
	scanf("%d", &jogadaJogador1);
    
    printf("\n%s Jogador 2 escolha: ", nomeJogador2);
	scanf("%d", &jogadaJogador2);
}

void jogadas() {
	if(jogadaJogador1 == 1 && jogadaJogador2 == 1){
		printf("\n%s jogou pedra X %s jogou pedra\n\n", nomeJogador1, nomeJogador2, nomeJogador2);
		printf("Empate!\n\n");
	}
    if(jogadaJogador1 == 2 && jogadaJogador2 == 2){
		printf("\n%s jogou papel X %s jogou papel\n\n", nomeJogador1, nomeJogador2);
		printf("Empate!\n\n");
	}
    if(jogadaJogador1 == 3 && jogadaJogador2 == 3){
		printf("\n%s jogou tesoura X %s jogou tesoura\n\n", nomeJogador1, nomeJogador2);
		printf("Empate!\n\n");
	}
    if(jogadaJogador1 == 1 && jogadaJogador2 == 3){
		printf("\n%s jogou pedra X %s Prompt tesoura\n\n", nomeJogador1, nomeJogador2);
		printf("%s ganhou! | %s perdeu!\n\n", nomeJogador1, nomeJogador2);
		pontosJogador1++;
	}
    if(jogadaJogador1 == 2 && jogadaJogador2 == 3){
		printf("\n%s jogou pedra X %s Prompt tesoura\n\n", nomeJogador1, nomeJogador2);
		printf("%s ganhou! | %s perdeu!\n\n", nomeJogador1, nomeJogador2);
		pontosJogador1++;
	}
	if(jogadaJogador1 == 2 && jogadaJogador2 == 1){
		printf("\n%s jogou papel X %s jogou pedra\n\n", nomeJogador1, nomeJogador2);
		printf("%s ganhou! | %s perdeu!\n\n", nomeJogador1, nomeJogador2);
		pontosJogador1++;
	}
    if(jogadaJogador1 == 3 && jogadaJogador2 == 2){
		printf("\n%s jogou tesoura X %s jogou papel\n\n", nomeJogador1, nomeJogador2);
		printf("%s ganhou! | %s perdeu!\n\n", nomeJogador1, nomeJogador2);
		pontosJogador1++;
	}
	if(jogadaJogador1 == 1 && jogadaJogador2 == 2){
		printf("\n%s jogou pedra X %s jogou papel\n\n", nomeJogador1, nomeJogador2);
		printf("%s perdeu! | %s ganhou!\n\n", nomeJogador1, nomeJogador2);
		pontosJogador2++;
	}
	if(jogadaJogador1 == 3 && jogadaJogador2 == 1){
		printf("\n%s jogou tesoura X %s jogou pedra\n\n", nomeJogador1, nomeJogador2);
		printf("%s perdeu! | %s ganhou!\n\n", nomeJogador1, nomeJogador2);
		pontosJogador2++;
	}
}

void iniciarJogo(){	
	printf("Pontos %s = %d\n", nomeJogador1, pontosJogador1);
	printf("Pontos %s = %d\n\n", nomeJogador2, pontosJogador2);

    printf("[1] Pedra | [2] Papel | [3] Tesoura\n");

	entrada();

	while(jogadaJogador1 < 1 || jogadaJogador1 > 3 || jogadaJogador2 < 1 || jogadaJogador2 > 3){
		printf("OPA! Parece que esse numero nao eh valido!\n");
		entrada();
	}	
} 

void main(){
	nomes();

    while((pontosJogador1 + pontosJogador2) < 3){
        iniciarJogo();;
        jogadas();

        Sleep(3000);
        system("cls");

		if(pontosJogador1 >= 2){
			printf("%s venceu a melhor de 3!\n\n", nomeJogador1);
			printf("Pontos %s = %d\n", nomeJogador1, pontosJogador1);
			printf("Pontos %s = %d\n\n", pontosJogador2);
			exit(0);
		}
		 else if(pontosJogador2 >= 2){
			printf("%s venceu a melhor de 3!\n", nomeJogador2);
			printf("Pontos %s = %d\n\n", nomeJogador2, pontosJogador2);
			printf("Pontos %s = %d\n", nomeJogador1, pontosJogador1);
			exit(0);
		}
    }
}