#include <stdio.h>
#include <locale.h>
#include <time.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    time_t t;
    time(&t);

    struct tm *data;
    data = localtime(&t);

    int anoAtual = data->tm_year + 1900;
    int anoNasc, idade, anoAlistamento, diferencaAnos;

    printf("<<< EX025 - SERVIÇO MILITAR V2.0 >>>\n\n");
    printf("Atualmente estamos no ano de %i.\n", anoAtual);
    printf("Em que ano você nasceu? ");
    scanf("%i", &anoNasc);
    printf("---------------------------------------------\n");

    idade = anoAtual - anoNasc;
    anoAlistamento = anoNasc + 18;
    diferencaAnos = anoAtual - anoAlistamento;

    if (idade>18) {
        printf("Sua idade atual é %i anos.\n", idade);
        printf("Seu alistamento foi em %i. Já se passaram %i anos.\n", anoAlistamento, diferencaAnos);
        printf("-------------------------------------------------------------\n");
    } else {
        if (idade<18) {
            printf("Sua idade atual é %i anos.\n", idade);
            printf("Seu alistamento será em %i. Ainda faltam %i anos.", anoAlistamento, diferencaAnos*(-1));
            printf("---------------------------------------------------------\n");
        } else {
            printf("Sua idade atual é %i \n", idade);
            printf("Você completa 18 anos exatamente em %i. Vá se alistar! \n", anoAlistamento);
            printf("-------------------------------------------------------------\n");
        }
    }
}
