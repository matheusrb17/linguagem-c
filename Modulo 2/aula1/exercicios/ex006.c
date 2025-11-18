#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    int num;
    printf("<<< EX006 - Antecessor e Sucessor >>>\n\n");
    printf("Digite um número: ");
    scanf("%i", &num);

    int num1 = num + 1;
    int num2 = num - 1;

    printf("Analisando o número %i, seu antecessor é %i e seu sucessor é %i", num, num2, num1);
}
