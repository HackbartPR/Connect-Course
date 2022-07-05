#include <stdio.h>

int main(){

    float first = 0;
    printf("DIGITE O PRIMEIRO NUMERO: ");
    scanf("%f", &first);

    float second = 0;
    printf("DIGITE O SEGUNDO NUMERO: ");
    scanf("%f", &second);

    float result = 0;
    first == second ? (result = first + second) : (result = first * second);

    printf("\nRESULTADO: %.2f\n", result);

    return 0;
}
