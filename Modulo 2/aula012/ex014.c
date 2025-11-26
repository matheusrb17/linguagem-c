#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    printf("<<< EX014 - OPERADORES DE DESLOCAMENTO >>>\n\n");

    int n1, n2;

    printf("Digite um número: ");
    scanf("%i", &n1);
    printf("Digite outro número: ");
    scanf("%i", &n2);

    printf("----- OPERAÇÕES SHIFT -----\n\n");

    int num1 = n1 >> n2;
    int num2 = n1 << n2;

    printf("Calculando %i >> %i é igual a %i \n\n", n1, n2, num1);
    printf("Calculuando %i << %i é igual a %i", n1, n2, num2);
}
