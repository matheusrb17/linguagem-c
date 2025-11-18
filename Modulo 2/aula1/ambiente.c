#include <stdio.h>

void main(){
    float preco = 1000;
    float desc = preco + (preco * 10 / 100);
    printf("O valor e %.2f reais", desc);
}
