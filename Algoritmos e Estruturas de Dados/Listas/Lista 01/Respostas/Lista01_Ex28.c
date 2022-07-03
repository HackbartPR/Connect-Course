#include <stdio.h>

#define FIRST_WEIGHT 2
#define SECOND_WEIGHT 3

int main(){

    float first = 0;
    printf("DIGITE O PRIMEIRO NUMERO: ");
    scanf("%f", &first);

    float second = 0;
    printf("DIGITE O SEGUNDO NUMERO: ");
    scanf("%f", &second);

    float weightedAverage = ((first * FIRST_WEIGHT) + (second * SECOND_WEIGHT)) / (FIRST_WEIGHT + SECOND_WEIGHT);
    printf("\nA MEDIA PONDERADA ENTRE AS NOTAS %.2f E %.2f E IGUAL A %.2f\n", first, second, weightedAverage);

    return 0;
}
