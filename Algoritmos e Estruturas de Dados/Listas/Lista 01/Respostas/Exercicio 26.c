#include <stdio.h>


int main(){

    float first = 0;
    printf("DIGITE O PRIMEIRO NUMERO: ");
    scanf("%f", &first);

    float second = 0;
    printf("DIGITE O SEGUNDO NUMERO: ");
    scanf("%f", &second);

    float third = 0;
    printf("DIGITE O TERCEIRO NUMERO: ");
    scanf("%f", &third);

    float result = first * second * third;
    printf("\n%.2f x %.2f x %.2f = %.2f\n", first, second, third, result);

    return 0;
}
