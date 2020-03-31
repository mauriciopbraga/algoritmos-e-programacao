int main(){

    setlocale(LC_ALL, "portuguese");

    int idade = 18;
    int peso = 50;
    char nome = 'M';

    printf("Sua idade �: %d\n", idade);
    printf("Seu peso �: %dkg\n", peso);
    printf("Seu nome �: %c\n", nome);

    getch();
    system("cls");

    idade = 10;
    peso = 40;
    nome = 'J';

    printf("Sua idade �: %d\n", idade);
    printf("Seu peso �: %dkg\n", peso);
    printf("Seu nome �: %c\n", nome);

    getch();


    return 0;
}
