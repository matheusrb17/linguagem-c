#include <stdio.h>
#include <locale.h>
/*
    Programa para praticar a inclusão da biblioteca que aceita acentuações
*/
void main () {
    setlocale(LC_ALL, "Portuguese"); //muda a zona de codificação de caracteres
    printf("C é \n \"SUPER\"\nFácil!");
}
