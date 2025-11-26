/* DESCONTO DE 10% EM COMPRAS ACIMA DE 500 REAIS */


#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    printf("<<< EX016 - CONSUMIDOR GANHA DESCONTO >>> \n\n");

    float valor, desconto, novoPreco;

    printf("Qual foi o valor da compras? R$");
    scanf("%f", &valor);

    if (valor>500) {

        desconto = (10.0/100.0)*valor;
        novoPreco = valor - desconto;

        printf("============= ATENÇÃO ============= \n");
        printf("Por fazer mais de R$ 500 em compras, você vai receber R$ %.2f de desconto! \n", desconto);
        printf("O valor a ser pago é R$ %.2f! Volte sempre!", novoPreco);

    }

    else {

        printf("------------------------------\n");
        printf("Você comprou R$%.2f na nossa loja. \n", valor);
        printf("Volte sempre! \n");
        printf("------------------------------\n");
    }

}
