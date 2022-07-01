#include <stdio.h>


int main(){

    float first = 0;
    printf("DIGITE O PRIMEIRO NUMERO: ");
    scanf("%f", &first);

    float second = 0;
    printf("DIGITE O SEGUNDO NUMERO: ");
    scanf("%f", &second);

    float result = first / second;
    printf("\n%.2f / %.2f = %.2f\n", first, second, result);

    return 0;
}
