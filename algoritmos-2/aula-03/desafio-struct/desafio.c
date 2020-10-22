// Criar a estrutura e o algoritmo para cadastro e exibição de dados de disciplinas (código, nome, carga horária)

#include <stdio.h>

struct disciplina{
  int carga;
  char codigo[50], nome[50];
};

int main(){

  struct disciplina disciplina;

  printf("Digite o codigo da discplina: ");
  scanf("%s", disciplina.codigo);
  printf("Digite o nome da disciplina: ");
  scanf("%s", disciplina.nome);
  fflush(stdin);
  printf("Digite a carga horaria da disciplina: ");
  scanf("%d", &disciplina.carga);

  printf("\nCodigo: %s\n", disciplina.codigo);
  printf("Nome: %s\n", disciplina.nome);
  printf("Carga horaria: %d\n", disciplina.carga);


  return 0;
}
