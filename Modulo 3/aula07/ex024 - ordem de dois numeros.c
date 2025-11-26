#include <stdio.h>
#include <locale.h>

void main() {

    setlocale(LC_ALL, "Portuguese");

    int n1, n2;

    printf("<<< EX024 - ORDEM EM DOIS NÚMEROS >>>\n\n");
    printf("Diga-me dois números e eu os colocarei em ordem crescente.\n\n");
    printf("Primeiro número: ");
    scanf("%i", &n1);
    printf("Segundo número: ");
    scanf("%i", &n2);

    if (n1>n2) {
        printf("Os números em ordem são %i e %i.", n2, n1);
    } else {
        if (n1<n2) {
            printf("Os números em ordem são %i e %i.", n1, n2);
        } else {
            printf("Os números são iguais, %i e %i.", n1, n2);
        }
    }
}
