#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    char letra;

    printf("Digite uma letra: ");
    letra = getchar();

    printf("Você digitou a letra %c. Antes dela tem o %c e após ela tem %c.", letra, (letra-1), (letra+1));
}
