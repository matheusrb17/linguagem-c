#import <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    setlocale(LC_NUMERIC, "C");

    char nome[30], nome2[30], nome3[30];
    char sexo, sexo2, sexo3;
    float nota, nota2, nota3;

    printf("<<< EX004 - Listagem >>>");
    printf("\n");
    printf("Cadastrando a primeira pessoa: \n");
    printf("------------------------------\n");
    printf("NOME: ");
    gets(nome);
    printf("SEXO [M/F]: ");
    sexo = getchar();
    printf("NOTA: ");
    scanf(" %f", &nota);

    getchar();
    printf("\n");
    printf("Cadastrando a segunda pessoa: \n");
    printf("------------------------------\n");
    printf("NOME: ");
    gets(nome2);
    printf("SEXO [M/F]: ");
    sexo2 = getchar();
    printf("NOTA: ");
    scanf(" %f", &nota2);

    getchar();
    printf("\n");
    printf("Cadastrando a terceira pessoa: \n");
    printf("------------------------------\n");
    printf("NOME: ");
    gets(nome3);
    printf("SEXO [M/F]: ");
    sexo3 = getchar();
    printf("NOTA: ");
    scanf(" %f", &nota3);

    getchar();
    printf("\n");

    printf("Listagem Completa \n");
    printf("------------------------------\n");
    printf("NOME \t \t SEXO \t NOTA \n");
    printf("%s \t \t %c \t %.1f \n", nome, sexo, nota);
    printf("%s \t \t %c \t %.1f \n", nome2, sexo2, nota2);
    printf("%s \t \t %c \t %.1f \n", nome3, sexo3, nota3);
}
