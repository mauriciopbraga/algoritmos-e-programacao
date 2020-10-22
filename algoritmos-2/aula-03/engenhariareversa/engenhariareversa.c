#include <stdio.h>

struct aluno{
  char nome[50], cidade[50], email[50], genero;
  int matricula;
};

int main(){

  struct aluno aluno;

  printf("Digite o nome do aluno: ");
  scanf("%s", aluno.nome);
  printf("Digite a cidade onde o aluno mora: ");
  scanf("%s", aluno.cidade);
  printf("Digite o numero da matricula do aluno: ");
  scanf(" %d", &aluno.matricula);
  printf("Informe o email do aluno: ");
  scanf(" %s", aluno.email);
  printf("Informe o genero (M)asculino ou (F)eminino: ");
  scanf(" %c", &aluno.genero);
  printf("\nDADOS DO ALUNO: ");
  printf("Nome: %s\nCidade: %s\nMatricula: %d\nEmail: %s\nGenero: %c\n", aluno.nome, aluno.cidade, aluno.matricula, aluno.email, aluno.genero);

  return 0;
}
