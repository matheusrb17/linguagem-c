#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    int num1, dobro;
    float terca;

    printf("Digite um número: ");
    scanf("%i", &num1);

    dobro = num1 * 2;
    terca = (float)num1 / 3;

    printf("Analisando o número %i, seu dobro é %i e a terça parte é %.2f", num1, dobro, terca);
}
