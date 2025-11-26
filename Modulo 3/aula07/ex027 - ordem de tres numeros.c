#include <stdio.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL, "Portuguese");

    printf("<<< EX027 - TRÊS VALORES EM ORDEM >>>\n");
    printf("Diga-me três números e eu os colocarei em ordem para você. \n\n");

    int n1, n2, n3;

    printf("Primeiro número: ");
    scanf("%i", &n1);
    printf("Segundo número: ");
    scanf("%i", &n2);
    printf("Terceiro número: ");
    scanf("%i", &n3);

    printf("--------------------------\n\n");

    if (n1>n2 && n1>n3) {
        printf("MAIOR: %i \n", n1);
        printf("INTERMEDIÁRIO: %i \n", n2);
        printf("MENOR: %i \n", n3);
    } else if (n2>n1 && n2>n3) {
            printf("MAIOR: %i \n", n2);
            printf("INTERMEDIÁRIO: %i \n", n1);
            printf("MENOR: %i \n", n3);
        } else if (n3>n1 && n3>n2) {
                printf("MAIOR: %i \n", n3);
                printf("INTERMEDIÁRIO: %i \n", n1);
                printf("MENOR: %i \n", n2);
            } else {
                printf("Os números são todos iguais. \n");
            }
}
