#include <stdio.h>
#include <locale.h>

void main (){
    setlocale(LC_ALL, "Portuguese");

    char produto[30];

    printf("<<< EX010 - Preço do Produto >>>\n\n");
    printf("Produto: ");
    fgets(produto, 30, stdin)
    printf("Preço de %c", produto);


}
