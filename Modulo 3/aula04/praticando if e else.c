#include <stdio.h>

void main(){
    int n;
    printf("Digite um valor inteiro: ");
    fflush(stdin);
    scanf("%i", &n);

    if (n%2==0) {
        printf("O valor %i e PAR \n", n);
    } else {
        printf("O valor %i e IMPAR \n", n);
    }
    printf("ACABOU.");
}
