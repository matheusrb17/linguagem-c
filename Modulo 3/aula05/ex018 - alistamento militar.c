#include <stdio.h>
#include <time.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");

    time_t t;
    time(&t);

    struct tm *data;
    data = localtime(&t);

    int anoNasc;
    int ano = data->tm_year + 1900;

    printf("<<< EX018 - SERVIÇO MILITAR v1.0 >>>\n\n");
    printf("Atualmente estamos no ano de %i \n", ano);
    printf("Em que ano você nasceu? ");
    scanf("%i", &anoNasc);

    int idade = ano - anoNasc;


    printf("-------------------------- \n");
    printf("Sua idade atual é de %i anos. \n", idade);

    if (idade>=18) {
        printf("Já fez 18 anos. Espero sinceramente que você tenha se alistado.");
    } else {
        printf("Você ainda não completou 18 anos. Não pode se alistar.");
    }
}
