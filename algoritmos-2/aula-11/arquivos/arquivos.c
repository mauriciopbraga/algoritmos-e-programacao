#include <stdio.h>

#include <stdlib.h>

/* Arquivos = persistência/armazenamento e leitura de dados */



/* Arquivos: gravação e leitura de dados */



void gravar(char c);

void gravarString();

void ler();



int main() {​​

char caractere;

printf("Digite um caractere para gravar:\n");

scanf("%c", &caractere);

gravar(caractere);

gravarString();

ler();

printf("\n");

  return 0;

}​​

// GRAVAR UM CARACTERE

void gravar(char c){​​

FILE *f;

f = fopen("arquivo01.txt", "w"); // w = write

//char c = 'x';

fputc(c,f);

fclose(f);

}​​



// GRAVAR UMA CADEIA DE CARACTERES

void gravarString(){​​

FILE *f;

f = fopen("arquivo02.txt", "w");

char string[30] = "Algoritmos e Programação II";

int i=0;

while (string[i]!='\0'){​​

fputc(string[i],f);

i++;

}​​

fclose(f);

}​​




void ler(){​​

FILE *f;

f = fopen("arquivo02.txt", "r"); // r = read

char c;

while(1){​​

c = fgetc(f);

if (c==EOF) {​​

break;

}​​

else {​​

printf("%c",c);

}​​

}​​

}​​