#include <stdio.h>

//DECLARAÇÃO DE CONSTANTES
#define PRICE_BREAD 0.12
#define PRICE_BROA 0.15
#define PORCENT_SAVED 0.10

void main(){
    printf("QUANTIDADE DE PAES VENDIDOS: ");
    int quantBread = 0;
    scanf("%d", &quantBread);

    printf("QUANTIDADE DE BROAS VENDIDAS: ");
    int quantBroas = 0;
    scanf("%d", &quantBroas);

    float profit = (quantBread * PRICE_BREAD) + (quantBroas * PRICE_BROA);
    float profitSaved = profit * PORCENT_SAVED;

    printf("\n\nQUANTIDADE DE PAES VENDIDOS: %d\n", quantBread);
    printf("QUANTIDADE DE BROAS VENDIDAS: %d\n", quantBroas);
    printf("VALOR ARRECADADO: R$ %.2f\n", profit);
    printf("VALOR GUARDADO (10%%): R$ %.2f\n", profitSaved);
}
