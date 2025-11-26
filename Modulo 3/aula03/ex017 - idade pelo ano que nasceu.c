#include <stdio.h>
#include <time.h>
#include <locale.h>

void main() {

    setlocale(LC_ALL, "Portuguese");

    int anoNasc, idade;

    time_t t;
    time(&t);

    struct tm * data;
    data = localtime(&t);

    int anoAtual = data->tm_year + 1900;

    printf("<<< EX017 - FILA DE BANCO >>> \n\n");
    printf("Em que ano você nasceu? ");
    scanf("%i", &anoNasc);

    idade = anoAtual - anoNasc;

    if (idade>=65) {
        printf("------------------------ \n");
        printf("Você tem %i anos, certo? \n", idade);
        printf("Seja Bem-Vindo(a) ao Banco Estudonauta! \n");
        printf("=== ATENÇÃO! DIRIJA-SE PARA A FILA PREFERENCIAL === \n");
        printf("------------------------ \n");
    } else {
        printf("------------------------ \n");
        printf("Você tem %i anos, certo? \n", idade);
        printf("Seja Bem-Vindo(a) ao Banco Estudonauta! \n");
        printf("------------------------ \n");
    }
}
