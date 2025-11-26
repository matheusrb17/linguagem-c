#include <stdio.h>
#include <time.h>

/* PRATICANDO BIBLIOTECA TIME (DATA E HORA)

    tm_mday
    tm_mon
    tm_year
    tm_wday
    tm_yday
    tm_hour
    tm_min
    tm_sec
*/

void main(){
    time_t t;
    time(&t);

    struct tm * data;
    data = localtime(&t);

    int d = data->tm_mday;
    int m = data->tm_mon + 1;
    int a = data->tm_year + 1900;
    int semana = data->tm_wday;
    int diaAno = data->tm_yday;
    int hora = data->tm_hour;
    int minuto = data->tm_min;
    int segundo = data->tm_sec;


    printf("O dia de hoje e %i / %i / %i \n\n", d, m, a);

    printf("Dia da semana: %i \n", semana);
    printf("Dia do ano: %i \n", diaAno);
    printf("Horario local: %i \n", hora);
    printf("Minutagem local: %i \n", minuto);
    printf("Secundagem local: %i \n", segundo);
}
