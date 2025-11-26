#include <stdio.h>
#include <locale.h>

void main() {

    setlocale(LC_ALL, "Portuguese");

    int n;

    printf("<<< EX023 - POSITIVO OU NEGATIVO >>> \n\n");
    printf("Diga-me um número e eu te direi se ele é POSITIVO, NEGATIVO ou NULO.\n\n");

    printf("Digite um número: ");
    scanf("%i", &n);

    if (n>0) {
        printf("O valor %i é POSITIVO.", n);
    } else {
        if (n<0) {
            printf("O valor %i é NEGATIVO.", n);
        } else {
            printf("O valor é NULO.");
        }
    }
}
