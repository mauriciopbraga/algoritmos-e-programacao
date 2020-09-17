#include <stdio.h>

struct cadastro{
  char nome[50], sobrenome[50];
  int idade;
};

int main(){

  struct cadastro cadastro;

  printf("Digite seu nome: ");
  scanf("%s", cadastro.nome);
  printf("Digite seu sobrenome: ");
  scanf("%s", cadastro.sobrenome);
  printf("Digite sua idade: ");
  fflush(stdin);
  scanf("%d", &cadastro.idade);

  printf("\nNome completo: %s %s\n", cadastro.nome, cadastro.sobrenome);
  printf("Idade: %d\n", cadastro.idade);

  return 0;
}
