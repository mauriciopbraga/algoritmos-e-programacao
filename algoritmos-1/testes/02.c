#include <stdio.h>

int main (void){

  int n, i, fatorial;

  printf("Entre o valor : ");
  scanf("%d", &n);

  fatorial = 1;

  i = 1;
  while (i <= n) {
    fatorial = fatorial * i;
    i++;   
  }

  printf("%d! = %d\n", n, fatorial);
}