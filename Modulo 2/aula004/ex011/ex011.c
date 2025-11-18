#include <stdio.h>
#include <locale.h>
void main() {
    int n1;
    setlocale(LC_ALL, "Portuguese");
    printf("<<< EX 011 - Par ou Ímpar >>>\n\n");
    printf("Digite um número qualquer: \n");
    scanf("%i", &n1);
    char *definir = (n1 % 2 == 0)?"Par":"Ímpar";
    printf("Este número é: %s", definir);
}
