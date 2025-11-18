#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    char letra;

    printf("<<< EX008 - Alfabeto >>>\n\n");
    printf("Digite uma letra: ");
    scanf("%c", &letra);

    char letra1 = letra - 1;
    char letra2 = letra + 1;

    printf("Antes da letra %c temos a letra %c. Depois temos a letra %c", letra, letra1, letra2);
}
