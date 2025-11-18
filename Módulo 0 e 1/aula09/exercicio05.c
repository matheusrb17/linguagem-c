#import <stdio.h>
#import <stdlib.h>
#include <locale.h>

void main (){
    setlocale(LC_ALL, "Portuguese");

    int num1;
    int num2 = rand() % 10 + 1;

    printf("<<< EX005 - Será se você acerta? \n\n");
    printf("Vou pensar em um número entre 1 e 5. Tente adivinhar! \n\n");
    printf("Qual é o seu palpite? ");
    scanf("%d", &num1);
    printf("Eu pensei no número %i e você pensou no %i.", num2, num1);
}
