#include <stdio.h>

#define HUNDRED 100
#define TEN 10

int main(){

    int number = 0;
    printf("DIGITE UM NUMERO INTEIRO DE 3 DIGITOS (EX: 100): ");
    scanf("%d", &number);

    int hundredPart = (number / HUNDRED) * HUNDRED;

    int unityPart = number % TEN;

    int tenPart = (number - hundredPart) - unityPart;

    printf("CENTENA: %d   ", hundredPart);
    printf("DEZENA: %d   ", tenPart);
    printf("UNIDADE: %d   ", unityPart);

    return 0;
}
