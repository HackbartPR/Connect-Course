#include <stdio.h>

#define PRICE_SMALL 10
#define PRICE_MEDIUM 12
#define PRICE_BIG 15

int main() {

    unsigned int soldSmall = 0;
    printf("QUANTIDADE DE CAMISETAS [P] VENDIDAS: ");
    scanf("%ud", &soldSmall);

    unsigned int soldMedium = 0;
    printf("QUANTIDADE DE CAMISETAS [M] VENDIDAS: ");
    scanf("%ud", &soldMedium);

    float soldBig = 0;
    printf("QUANTIDADE DE CAMISETAS [G] VENDIDAS: ");
    scanf("%f", &soldBig);

    float totalSold = soldSmall * PRICE_SMALL + soldMedium * PRICE_MEDIUM + soldBig * PRICE_BIG;
    printf("\nVALOR ARRECADADO COM A VENDA R$ %.2f\n", totalSold);

    return 0;
}
