#include <stdio.h>
#include <locale.h>
#include <string.h>

void main() {

    setlocale(LC_ALL, "Portuguese");

    char estado[5];

    printf("<<< EX026 - QUAL É O SEU ESTADO? >>>\n\n");
    printf("Em que estado do Brasil você nasceu? (digite a sigla do estado): ");
    scanf("%s", estado);

    if (strcmp(estado, "PR") == 0 || (strcmp(estado, "pr") == 0)) {
        printf("Nascendo no PR você é Bicho Do Paraná! \n\n");
    } else {
        if (strcmp(estado, "SC") == 0 || (strcmp(estado, "sc") == 0)) {
            printf("Nascendo em SC você é CATARINENSE \n\n");
        } else {
            if (strcmp(estado, "RS") == 0 || (strcmp(estado, "rs") == 0));
                printf("Nascendo em RS você é GAÚCHO. \n\n");
        }
    }
}
