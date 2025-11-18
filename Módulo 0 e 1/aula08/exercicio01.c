#import <stdio.h>
#include <locale.h>

void main () {
    setlocale(LC_ALL, "Portuguese");
    setlocale(LC_NUMERIC, "C");
    printf("<<< EX003 - Dados >>>");

    printf("\n");

    char nome[30];
    unsigned int idade;
    float peso;
    printf("Qual é seu nome? ");
    gets(nome);
    printf("Quantos anos você tem? ");
    scanf(" %d", &idade);
    printf("Qual é o seu peso? (Kg) ");
    scanf(" %f", &peso);

    printf("\n");

    printf("------<<< PROCESSANDO >>>------\n");

    printf("\n");

    printf("Muito prazer, %s. Você tem %i anos e pesa %.1f, correto? \n", nome, idade, peso);

    printf("\n");

    printf("Fim.\n");
}
