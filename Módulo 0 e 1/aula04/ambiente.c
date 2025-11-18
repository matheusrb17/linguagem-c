#import <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    printf("O %s tem %d anos \n", "Matheus", 22);
    printf("Seu peso atual é de%6.1fKg \n", 66.5);
    printf("O seu sexo é %c", 'M');
}
