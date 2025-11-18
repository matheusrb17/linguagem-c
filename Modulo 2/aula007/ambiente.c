#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    int a = 6;
    a -= 2;
    printf("O valor de A é %d", a);
}
