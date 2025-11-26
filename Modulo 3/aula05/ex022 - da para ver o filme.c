#include <stdio.h>
#include <locale.h>
#include <time.h>

void main() {

    setlocale(LC_ALL, "Portuguese");

    time_t t;
    time(&t);

    struct tm *data;
    data = localtime(&t);

    printf("<<< EX022 - DÁ PARA VER O FILME? >>> \n\n");

    float dinheiro;
    int hora = data->tm_hour;

    printf("========= CINEMA ESTUDONAUDA =========\n");
    printf("HORÁRIO DO FILME: 19H - PREÇO DO INGRESSO: R$20 \n");
    printf("-----------------------------------------------\n");
    printf("Quanto de dinheiro você tem? R$");
    scanf("%f", &dinheiro);
    printf("Agora são %i horas \n", hora);

    if (dinheiro>=20) {
        printf("Você consegue comprar o ingresso! \n\n");
    } else {
        printf("Infelizmente não é possível comprar o ingresso. \n\n");
    }

}
