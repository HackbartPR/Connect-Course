#include <stdio.h>
#include <math.h>

#define CONVERT_METER 100

int main(){

    float diameter = 0;
    printf("DIGITE O DIAMETRO DA CAIXA D'AGUA EM CENTIMETROS: ");
    scanf("%f", &diameter);

    float height = 0;
    printf("DIGITE A ALTURA DA CAIXA D'AGUA EM CENTIMETROS: ");
    scanf("%f", &height);

    float diameterConverted = diameter / CONVERT_METER;
    float heightConverted = height / CONVERT_METER;

    float volume = M_PI * pow( diameterConverted / 2 ,2) * heightConverted;

    printf("\n O VOLUME DA CAIXA E %.2f LITROS", volume);

    return 0;
}
