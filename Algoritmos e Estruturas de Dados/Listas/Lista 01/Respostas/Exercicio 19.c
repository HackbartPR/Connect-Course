#include <stdio.h>

#define PRICE_IDENTIF_RING 4.0
#define PRICE_FOOD_RING 3.5
#define AMOUNT_INDENT_RING 1
#define AMOUNT_FOOD_RING 2

int main(){

    int amountChicken = 0;
    printf("QUANTIDADE TOTAL DE FRANGOS DA PRODUCAO: ");
    scanf("%d", &amountChicken);

    float priceIdentByChicken = PRICE_IDENTIF_RING * AMOUNT_INDENT_RING * amountChicken;
    float priceFoodByChicken = PRICE_FOOD_RING * AMOUNT_FOOD_RING * amountChicken;
    float priceTotal = priceFoodByChicken + priceIdentByChicken;

    printf("PARA %d FRANGOS SERA GASTO R$%.2f", amountChicken, priceTotal);

    return 0;
}
