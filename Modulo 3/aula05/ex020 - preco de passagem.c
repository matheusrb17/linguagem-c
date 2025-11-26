#include <stdio.h>
#include <locale.h>

void main() {

    setlocale(LC_ALL, "Portuguese");

    float distancia, preco;

    printf("<<< EX020 - PREÇO DA PASSAGEM >>> \n\n");
    printf("======= TABELAS DE PREÇOS ======== \n\n");
    printf("Viagens até 200 Km        R$0.50/Km \n");
    printf("A partir de 200 Km        R$0.35/Km \n");
    printf("--------------------------------- \n\n");
    printf("Distância total da viagem, em Km: ");
    scanf("%f", &distancia);

    if (distancia<=200) {
        preco = distancia * 0.50;

        printf("Uma viagem de %.2f Km vai custar R$0,50/Km \n", distancia);
        printf("Valor total: R$ %.2f \n\n", preco);
    } else {
        preco = distancia * 0.35;

        printf("Uma viagem de %.2f Km vai custar R$0,35/Km \n", distancia);
        printf("Valor total: R$ %.2f \n\n", preco);
    }
}
