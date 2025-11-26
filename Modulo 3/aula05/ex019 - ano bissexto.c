#include <stdio.h>
#include <locale.h>

void main () {

    setlocale(LC_ALL, "Portuguese");

    int ano;

    printf("<<< EX019 - Ano Bissexto >>> \n\n");
    printf("Digite um ano qualquer: ");
    scanf("%i", &ano);

    if (ano%4==0) {
        printf("O ano %i É BISSEXTO.", ano);
    } else {
        printf("O ano %i NÃO É BISSEXTO.", ano);
    }
}
