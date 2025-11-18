#import <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    unsigned int idade = 22;
    float peso = 66.5;
    char sexo = 'M';
    char nome[] = "Juvenal";

    printf("%s é do sexo %c, tem %i anos e pesa %.2fKg.", nome, sexo, idade, peso);
}
