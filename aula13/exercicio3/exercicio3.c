/*Uma família deseja informatizar suas despesas domésticas, pois seu filho está cursando Ciência da Computação.
Para o cálculo, as despesas da família são: água, luz, telefone,
condomínio, mensalidade, saúde, alimentação, vestuário, transporte e segurança.
As receitas são o salário do pai e o salário da mãe. Desenvolva um algoritmo
para ler as receitas e despesas, calcular a renda total da família, calcular o total
de despesas e o saldo (receitas – despesas). O programa deve mostrar ao usuário todos estes dados.
Ao lado do saldo, deve mostrar a mensagem conforme o valor: se o saldo for positivo,
mostrar a mensagem “Saldo Positivo”; se o saldo for negativo, mostrar a mensagem “Saldo Negativo”;
se o saldo for zero, mostrar a mensagem “Saldo Nulo”.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    //Receitas
    float salariop, salariom, renda;

    //Dispesas
    float agua, luz, tel, cond, mens, saude, aliment, vest, transp, seg, despesas;

    printf("Qual o salário da mãe? ");
    scanf("%f", &salariom);
    printf("Qual o salário do pai? ");
    scanf("%f", &salariop);
    printf("Total gasto com água? ");
    scanf("%f", &agua);
    printf("Total gasto com luz? ");
    scanf("%f", &luz);
    printf("Total gasto com telefone? ");
    scanf("%f", &tel);
    printf("Total gasto com condomínio? ");
    scanf("%f", &cond);
    printf("Total gasto com mensalidade? ");
    scanf("%f", &mens);
    printf("Total gasto com saúde? ");
    scanf("%f", &saude);
    printf("Total gasto com alimentação? ");
    scanf("%f", &aliment);
    printf("Total gasto com vestuário? ");
    scanf("%f", &vest);
    printf("Total gasto com transporte? ");
    scanf("%f", &transp);
    printf("Total gasto com segurança? ");
    scanf("%f", &seg);

    system("cls");

    renda = salariom + salariop;
    despesas = agua + luz + tel + cond + mens + saude + aliment + vest + transp + seg;

    printf("A renda familiar é de %.2f\n\n", renda);
    printf("O total gastos em despesas é de %.2f\n\n", despesas);

    if(renda > despesas){
        printf("O saldo é positivo\n\n");
    }
    else if(renda = 0){
        printf("O saldo é nulo\n\n");
    }
    else{
        printf("O saldo é negativo\n\n");
    }

    system("pause");
    return 0;
}
