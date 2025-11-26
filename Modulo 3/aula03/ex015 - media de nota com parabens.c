#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    printf("<<< EX015 - BONS ALUNOS MERECEM PARABÉNS >>> \n\n");

    float nota1, nota2;

    printf("Digite a sua primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a sua segunda nota: ");
    scanf("%f", &nota2);

    float media = (nota1 + nota2) / 2;

    if (media>=7) {
        printf("MEUS PARABÉNS!");
    }

    printf(" A sua média final foi %.1f", media);
}
