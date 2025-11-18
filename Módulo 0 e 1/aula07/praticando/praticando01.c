#import <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    setlocale(LC_NUMERIC, "C");

    int num1;
    float num2;

    printf("Digite um número INTEIRO: ");
    scanf("%i", &num1);
    printf("Digite um número REAL: ");
    scanf("%f", &num2);
    printf("O número inteiro é: %i \nO número real é: %f\n", num1, num2);

    getchar();

    printf("---------------------------------------\n");

    char letra;

    printf("Digite um único caracter: ");
    letra = getchar();
    getchar();
    printf("A letra digitada é: %c \n", letra);

    printf("---------------------------------------\n");

    char nome[30];
    printf("Digite o teu nome: ");
    gets(nome);
    printf("Seu nome é: %s", nome);
}
