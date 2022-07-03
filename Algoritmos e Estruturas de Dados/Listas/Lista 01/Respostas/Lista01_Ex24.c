#include <stdio.h>

#define PORCENT_WATER_NEEDED 0.8
#define PORCENT_JUICE_NEEDED 0.2

int main(){

    float liters = 0;
    printf("DIGITE A QUANTIDADE DE LITROS DE REFRESCO DESEJADA: ");
    scanf("%f", &liters);

    float waterLitersUsed = liters * PORCENT_WATER_NEEDED;
    float juiceLitersUSed = liters * PORCENT_JUICE_NEEDED;

    printf("\nPARA PRODUZIR %.2f LITROS DE REFRESCO, SERA NECESSARIO %.2f LITROS DE AGUA E %.2f LITROS DE SUCO DE MARACUJA\n", liters, waterLitersUsed, juiceLitersUSed);

    return 0;
}
