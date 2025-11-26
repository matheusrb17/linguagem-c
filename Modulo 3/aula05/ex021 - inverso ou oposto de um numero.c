#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    printf("<<< EX021 - INVERSO OU OPOSTO >>> \n\n");

    float numero, inverso, oposto;

    printf("Digite um número: ");
    scanf("%f", &numero);

    if (numero>=0) {

        inverso = 1 / numero;

        printf("O inverso de %f é igual a %.4f", numero, inverso);
    } else {

        oposto = numero * (-1);

        printf("O oposto de %.1f é igual a %.1f", numero, oposto);
    }
}
