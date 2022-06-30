#include <stdio.h>

//DECLARAÇÃO DE CONSTANTES
#define FEET_BY_HORSE 4;

void main(){
    printf("DIGITE A QUANTIDADE DE CAVALOS COMPRADOS: ");
    int quantHorses = 0;
    scanf("%d", &quantHorses);

    int quantHorseshoes = quantHorses * FEET_BY_HORSE;
    printf("SERAO NECESSARIAS %d FERRADURAS\n", quantHorseshoes);
}
