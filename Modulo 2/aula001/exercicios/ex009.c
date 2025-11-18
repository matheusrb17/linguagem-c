#include <stdio.h>
#include <locale.h>

void main(){

    char nome[20];
    float nota1;
    float nota2;

    setlocale(LC_ALL, "Portuguese");
    setlocale(LC_NUMERIC, "C");
    printf("<<< EX008 - Notas do Aluno >>>\n\n");
    printf("Nome do aluno: ");
    gets(nome);
    printf("Nota 1: ");
    scanf("%f", &nota1);
    printf("Nota 2: ");
    scanf("%f", &nota2);

    float media = (nota1 + nota2) / 2;

    printf("O aluno %c tirou notas %.2f e %.2f e ficou com a média %.2f", nome, nota1, nota2, media);
}
