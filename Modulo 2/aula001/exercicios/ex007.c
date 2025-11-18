#include <stdio.h>
#include <locale.h>

void main (){
    setlocale(LC_ALL, "Portuguese");

    float num;

    printf("<<< EX007 - Dobro e Terça Parte >>>\n\n");
    printf("Digite um número: ");
    scanf("%f", &num);

    float num1 = num * 2;
    float num2 = num / 3;

    printf("Analisando o número %f, seu dobro é %f e sua terça parte é %f", num, num1, num2);
}
