#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    //soma
    int s1, s2, totalsoma;
    s1 = 6;
    s2 = 2;
    totalsoma = s1 + s2;

    printf("O resultado do cálculo %d + %d é %d\n\n", s1, s2, totalsoma);

    //subtração
    int m1, m2, totalmenos;
    m1 = 5;
    m2 = 2;
    totalmenos = m1 - m2;

    printf("O resultado do cálculo %d - %d é %d\n\n", m1, m2, totalmenos);

    //multiplicação
    int x1, x2, totalmult;
    x1 = 6;
    x2 = 2;
    totalmult = x1 * x2;

    printf("O resultado do cálculo %d * %d é %d\n\n", x1, x2, totalmult);

    //divisão
    int d1, d2, totaldiv;
    d1 = 6;
    d2 = 2;
    totaldiv = d1 / d2;

    printf("O resultado do cálculo %d / %d é %d", d1, d2, totaldiv);

    system("pause");
    return 0;
}
