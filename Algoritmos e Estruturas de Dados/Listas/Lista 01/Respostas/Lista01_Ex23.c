#include <stdio.h>

#define CONVERT_HEIGHT 100

int main(){

    int personTall = 0;
    printf("DIGITE SUA ALTURA [CM]: ");
    scanf("%d", &personTall);

    int buildShadow = 0;
    printf("DIGITE O COMPRIMENTO DA SOMBRA DO PREDIO [CM]: ");
    scanf("%d", &buildShadow);

    int personShadow = 0;
    printf("DIGITE O COMPRIMENTO DA SUA SOMBRA [CM]: ");
    scanf("%d", &personShadow);

    float howTall = personTall / personShadow;
    float buildHeight = (howTall * buildShadow) / CONVERT_HEIGHT;

    printf("\nO PREDIO POSSUI %.2f METROS DE ALTURA\n", buildHeight);

    return 0;
}
