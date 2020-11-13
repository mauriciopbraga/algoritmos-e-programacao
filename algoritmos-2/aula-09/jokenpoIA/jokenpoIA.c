// Pedra, papel ou tesoura contra o computador

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <windows.h>

int jogadaUsuario, jogadaIA;
int pontosUsuario = 0, pontosIA = 0;
char nome[30];

void nomeUsuario(){
	printf("Digite seu nome: ");
	scanf("%s", nome);
	printf("\n");
}

void entrada(){
	printf("\nEscolha pedra, papel ou tesoura: ");
	scanf("%d", &jogadaUsuario);
}

int gerarNumeroIA(){
	srand(time(NULL));
	jogadaIA = rand() % 3 + 1;
	return jogadaIA;
}

void jogadas() {
	if(jogadaUsuario == 1 && jogadaIA == 1){
		printf("\n%s jogou pedra X Prompt jogou pedra\n\n", nome);
		printf("Empate!\n\n");
	}
    if(jogadaUsuario == 2 && jogadaIA == 2){
		printf("\n%s jogou papel X Prompt jogou papel\n\n", nome);
		printf("Empate!\n\n");
	}
    if(jogadaUsuario == 3 && jogadaIA == 3){
		printf("\n%s jogou tesoura X Prompt jogou tesoura\n\n", nome);
		printf("Empate!\n\n");
	}
    if(jogadaUsuario == 1 && jogadaIA == 3){
		printf("\n%s jogou pedra X Prompt tesoura\n\n", nome);
		printf("%s ganhou!\n\n", nome);
		pontosUsuario++;
	}
    if(jogadaUsuario == 2 && jogadaIA == 3){
		printf("\n%s jogou pedra X Prompt tesoura\n\n", nome);
		printf("%s ganhou!\n\n", nome);
		pontosUsuario++;
	}
	if(jogadaUsuario == 2 && jogadaIA == 1){
		printf("\n%s jogou papel X Prompt jogou pedra\n\n", nome);
		printf("%s ganhou!\n\n", nome);
		pontosUsuario++;
	}
    if(jogadaUsuario == 3 && jogadaIA == 2){
		printf("\n%s jogou tesoura X Prompt jogou papel\n\n", nome);
		printf("%s ganhou!\n\n", nome);
		pontosUsuario++;
	}
	if(jogadaUsuario == 1 && jogadaIA == 2){
		printf("\n%s jogou pedra X Prompt jogou papel\n\n", nome);
		printf("%s perdeu!\n\n", nome);
		pontosIA++;
	}
	if(jogadaUsuario == 3 && jogadaIA == 1){
		printf("\n%s jogou tesoura X Prompt jogou pedra\n\n", nome);
		printf("%s perdeu!\n\n", nome);
		pontosIA++;
	}
}

void iniciarJogo(){	
	printf("Pontos %s = %d\n", nome, pontosUsuario);
	printf("Pontos Prompt = %d\n\n", pontosIA);

    printf("[1] Pedra | [2] Papel | [3] Tesoura\n");

	entrada();

	while(jogadaUsuario < 1 || jogadaUsuario > 3){
		printf("OPA! Parece que esse numero nao eh valido!\n");
		entrada();
		scanf("%d", &jogadaUsuario);
	}	
} 

void main(){
	nomeUsuario();

    while((pontosUsuario + pontosIA) < 3){
        iniciarJogo();
        gerarNumeroIA();
        jogadas();

        Sleep(2000);
        system("cls");

		if(pontosUsuario >= 2){
			printf("%s venceu a melhor de 3!\n\n", nome);
			printf("Pontos %s = %d\n", nome, pontosUsuario);
			printf("Pontos Prompt = %d\n\n", pontosIA);
			exit(0);
		}
		 else if(pontosIA >= 2){
			printf("Prompt venceu a melhor de 3!\n");
			printf("Pontos Prompt = %d\n\n", pontosIA);
			printf("Pontos %s = %d\n", nome, pontosUsuario);
			exit(0);
		}
    }
}