#include <stdio.h>

//1) criar a estrutura Aluno com nome e matricula; (peso 1.0)struct  Aluno{
struct Aluno{
  char nome[30];
  int matricula;
};
//2) criar a estrutura Professor com nome e regimeTrabalho; (peso 1.0)
//obs: o regime de trabalho de um professor pode ser horista, parcial ou integral
struct Professor{
  char nome[30];
  char regimeTrabalho[30];
};
typedef struct{
  char nome[30];
  int cargaHoraria;
  struct Aluno aluno;
  struct Professor professor;
}Disciplina;

int main(){
  Disciplina disciplina;

  //3) Solicitar e armazenar no local correspondente as seguintes informações:

  //3.1) nome e carga horária da disciplina (peso 2.0)
  printf("Nome da disciplina: ");
  scanf("%s", disciplina.nome);
  printf("Carga horaria da disciplina: ");
  scanf("%d", &disciplina.cargaHoraria);
  //3.2) nome e regime de trabalho do professor dessa disciplina (peso 2.0)
  printf("Nome do professor: ");
  scanf("%s", disciplina.professor.nome);
  printf("Regime do professor: ");
  scanf("%s", disciplina.professor.regimeTrabalho);
  //3.3) nome e matricula do aluno dessa disciplina (peso 2.0)
  printf("Nome do aluno: ");
  scanf("%s", disciplina.aluno.nome);
  printf("Matricula do aluno: ");
  scanf("%d", &disciplina.aluno.matricula);

  //4) Exibir, na tela do computador, todos os dados que foram cadastrados. (peso 2.0)
  printf("\nNome da disciplina: %s\n", disciplina.nome);
  printf("Carga horaria da disciplina: %d\n", disciplina.cargaHoraria);
  printf("Nome do professor: %s\n", disciplina.professor.nome);
  printf("Regime do professor: %s\n", disciplina.professor.regimeTrabalho);
  printf("Nome do aluno: %s\n", disciplina.aluno.nome);
  printf("Matricula do aluno: %d\n", disciplina.aluno.matricula);

  return 0;
}
