#import <stdio.h>
#import <stdlib.h>
#import <time.h>
#include <locale.h>
void main () {
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));
    int n = rand() % 50 + 1;
    printf("Eu gerei o número inteiro (%d)");
}
