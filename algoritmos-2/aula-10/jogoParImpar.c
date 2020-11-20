// Jogo do par ou ímpar contra a máquina (reciclado do jokenpo)

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
	printf("\nDigite sua escolha: ");
	scanf("%d", &jogadaUsuario);
}

int gerarNumeroIA(){
	srand(time(NULL));
	jogadaIA = rand();
	return jogadaIA;
}

void jogadas(){
    if(jogadaUsuario == 1 && jogadaIA % 2 == 1){
        printf("\n%s escolheu impar X Prompt escolheu impar (%d)\n\n", nome, jogadaIA);
        printf("%s ganhou\n\n", nome);
        pontosUsuario++;
    }
    if(jogadaUsuario == 2 && jogadaIA % 2 == 0){
        printf("\n%s escolheu par X Prompt escolheu par (%d)\n\n", nome, jogadaIA);
        printf("%s ganhou\n\n", nome);
        pontosUsuario++;
    }
    if(jogadaUsuario == 1 && jogadaIA % 2 == 0){
        printf("\n%s escolheu impar X Prompt escolheu par (%d)\n\n", nome, jogadaIA);
        printf("Prompt ganhou\n\n");
        pontosIA++;
    }
    if(jogadaUsuario == 2 && jogadaIA % 2 == 1){
        printf("\n%s escolheu par X Prompt escolheu impar (%d)\n\n", nome, jogadaIA);
        printf("Prompt ganhou\n\n");
        pontosIA++;
    }
}

void iniciarJogo(){	
	printf("Pontos %s = %d\n", nome, pontosUsuario);
	printf("Pontos Prompt = %d\n\n", pontosIA);

    printf("[1] Impar | [2] Par\n");

	entrada();

	while(jogadaUsuario < 1 || jogadaUsuario > 2){
		printf("\nOPA! Parece que esse numero nao eh valido!\n");
		entrada();
	}	
} 

void main(){
	nomeUsuario();

    while((pontosUsuario + pontosIA) < 5){
        iniciarJogo();
        gerarNumeroIA();
        jogadas();

        Sleep(2000);
        system("cls");

		if(pontosUsuario >= 3){
			printf("%s venceu a melhor de 5!\n\n", nome);
			printf("Pontos %s = %d\n", nome, pontosUsuario);
			printf("Pontos Prompt = %d\n\n", pontosIA);
			exit(0);
		}
		 else if(pontosIA >= 3){
			printf("Prompt venceu a melhor de 5!\n\n");
			printf("Pontos Prompt = %d\n\n", pontosIA);
			printf("Pontos %s = %d\n", nome, pontosUsuario);
			exit(0);
		}
    }
}