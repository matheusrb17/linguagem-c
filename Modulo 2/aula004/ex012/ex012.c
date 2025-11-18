#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    setlocale(LC_NUMERIC, "Portuguese");
    float nota1, nota2, media;
    char *sit;
    printf("<<< EX 012 - Situação do Aluno >>>\n\n");
    printf("A primeira nota: ");
    scanf("%f", &nota1);
    printf("A segunda nota: ");
    scanf("%f", &nota2);
    media = (nota1 + nota2) / 2;
    sit = (media>=7)?"Aprovado":"Reprovado";
    printf("A média do aluno foi %.1f \n", media);
    printf("A sua situação é %s", sit);
}
