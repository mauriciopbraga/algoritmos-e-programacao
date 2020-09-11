/* Criar um algoritmo para cadastrar e exibir os os dados de veículos. Poderão ser cadastrados carros ou motos, com as informações de marca, modelo e valor.
Dessa forma, solicitar ao usuário qual tipo de veículo ele deseja cadastrar e utilizar a mesma estrutura para ambos */

#include <stdio.h>

struct veiculo{
  char tipo[50], marca[50], modelo[50];
  float valor;
};

int main(){
  struct veiculo veiculo;

  printf("Digite o tipo de veiculo para ser cadastrador: ");
  scanf("%s", veiculo.tipo);
  printf("Digite a marca do(a) %s: ", veiculo.tipo);
  scanf("%s", veiculo.marca);
  printf("Digite o modelo do(a) %s: ", veiculo.marca);
  scanf("%s", veiculo.modelo);
  printf("Digite o valor do(a) %s: ", veiculo.modelo);
  scanf("%f", &veiculo.valor);

  printf("\nTipo de veiculo: %s\n", veiculo.tipo);
  printf("Marca: %s\n", veiculo.marca);
  printf("Modelo: %s\n", veiculo.modelo);
  printf("Valor: %.2f\n", veiculo.valor);

  return 0;
}
