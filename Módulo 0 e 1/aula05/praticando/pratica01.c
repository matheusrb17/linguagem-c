#import <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    char nome[] = "Matheus";
    float peso = 66.5;
    unsigned int idade = 22;

    printf("O meu nome é %s, tenho %i e tenho %.2fKg", nome, idade, peso);
}
