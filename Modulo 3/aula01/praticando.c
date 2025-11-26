/* aprendendo IF */

#include <stdio.h>
void main(){
    float vel;
    printf("Digite a velocidade do automovel: ");
    fflush(stdin);
    scanf("%f", &vel);

    if (vel>80) {
        printf("\nVoce foi multado!\n\n");
    }
    printf("Se beber, nao dirija!\n\n");
}
