#include <stdio.h>

#define CONVERT_KG_TO_G 1000

int main(){

    float kiloWeight = 0;
    printf("DIGITE SEU PESO ATUAL EM KG: ");
    scanf("%f", &kiloWeight);

    float gramWeight = kiloWeight * CONVERT_KG_TO_G;
    printf("\nO PESO DE %.1fKg EQUIVALE A %.1fg\n", kiloWeight, gramWeight);

    return 0;
}
