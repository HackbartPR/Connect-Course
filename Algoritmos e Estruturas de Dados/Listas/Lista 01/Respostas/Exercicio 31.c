#include <stdio.h>

#define PORCENT_GET_FAT 0.15
#define PORCENT_LOSE_WEIGHT 0.2

int main(){

    float currentWeight = 0;
    printf("DIGITE SEU PESO ATUAL: ");
    scanf("%f", &currentWeight);

    float gainWeight = currentWeight * (1 + PORCENT_GET_FAT);
    float loseWeight = currentWeight * (1 - PORCENT_LOSE_WEIGHT);

    printf("\nEM CASO DE ENGORDAR 15%% DO PESO ATUAL, SEU PESO SERA DE %.1fKg, MAS EM CASO DE EMAGRECER 20%% SEU PESO SERA DE %.1fKg\n", gainWeight, loseWeight);

    return 0;
}
