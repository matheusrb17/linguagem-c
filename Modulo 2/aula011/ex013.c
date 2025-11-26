#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    printf("<<< EX013 - Operadores Bitwise >>> \n\n");

    int n1, n2;

    printf("Digite o primeiro valor: ");
    scanf("%i", &n1);
    printf("Digite o segundo valor: ");
    scanf("%i", &n2);

    int a = n1 & n2;
    int b = n1 | n2;
    int c = n1 ^ n2;

    printf("------ OPERADORES BITWISE ------\n");
    printf("Calculando %i & %i e igual a %i \n", n1, n2, a);
    printf("Calculando %i | %i e igual a %i \n", n1, n2, b);
    printf("Calculando %i ^ %i e igual a %i \n", n1, n2, c);
}
