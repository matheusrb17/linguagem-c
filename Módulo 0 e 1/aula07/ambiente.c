#import <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
/*
    int n;
    float n1;
    printf("Digite um número inteiro: ");
    scanf("%d \n", &n);
    printf("Digite um número real:");
    scanf("%f", &n1);
    printf("Você acabou de digitar os valores %i e %.1f. Obrigado! \n", n, n1);


    char r;
    char s;
    printf("Digite só uma letra: ");
    r = getchar();
    getchar();
    printf("Digite outra letra: ");
    s = getchar();
    getchar();
    printf("Voce digitou as letras \"%c\" e \"%c\"", r, s);
*/

    char nome[30];
    char ender[40];
    printf("Digite seu nome: ");
    gets(nome);
    printf("Digite seu endereço: ");
    gets(ender);
    printf("Você digitou seu nome: \"%s\" que mora em \"%s\"", nome, ender);
}
