/*Uma fam�lia deseja informatizar suas despesas dom�sticas, pois seu filho est� cursando Ci�ncia da Computa��o.
Para o c�lculo, as despesas da fam�lia s�o: �gua, luz, telefone,
condom�nio, mensalidade, sa�de, alimenta��o, vestu�rio, transporte e seguran�a.
As receitas s�o o sal�rio do pai e o sal�rio da m�e. Desenvolva um algoritmo
para ler as receitas e despesas, calcular a renda total da fam�lia, calcular o total
de despesas e o saldo (receitas � despesas). O programa deve mostrar ao usu�rio todos estes dados.
Ao lado do saldo, deve mostrar a mensagem conforme o valor: se o saldo for positivo,
mostrar a mensagem �Saldo Positivo�; se o saldo for negativo, mostrar a mensagem �Saldo Negativo�;
se o saldo for zero, mostrar a mensagem �Saldo Nulo�.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    //Receitas
    float salariop, salariom, renda;

    //Dispesas
    float agua, luz, tel, cond, mens, saude, aliment, vest, transp, seg, despesas;

    printf("Qual o sal�rio da m�e? ");
    scanf("%f", &salariom);
    printf("Qual o sal�rio do pai? ");
    scanf("%f", &salariop);
    printf("Total gasto com �gua? ");
    scanf("%f", &agua);
    printf("Total gasto com luz? ");
    scanf("%f", &luz);
    printf("Total gasto com telefone? ");
    scanf("%f", &tel);
    printf("Total gasto com condom�nio? ");
    scanf("%f", &cond);
    printf("Total gasto com mensalidade? ");
    scanf("%f", &mens);
    printf("Total gasto com sa�de? ");
    scanf("%f", &saude);
    printf("Total gasto com alimenta��o? ");
    scanf("%f", &aliment);
    printf("Total gasto com vestu�rio? ");
    scanf("%f", &vest);
    printf("Total gasto com transporte? ");
    scanf("%f", &transp);
    printf("Total gasto com seguran�a? ");
    scanf("%f", &seg);

    system("cls");

    renda = salariom + salariop;
    despesas = agua + luz + tel + cond + mens + saude + aliment + vest + transp + seg;

    printf("A renda familiar � de %.2f\n\n", renda);
    printf("O total gastos em despesas � de %.2f\n\n", despesas);

    if(renda > despesas){
        printf("O saldo � positivo\n\n");
    }
    else if(renda = 0){
        printf("O saldo � nulo\n\n");
    }
    else{
        printf("O saldo � negativo\n\n");
    }

    system("pause");
    return 0;
}
