#include <stdio.h>

#define PRICE_BY_KG 12

int main() {

    float plateWeight = 0;
    printf("DIGITE O PESO DO PRATO MENSURADO: ");
    scanf("%f", &plateWeight);

    float amountPaid = PRICE_BY_KG * plateWeight;
    printf("VALOR A SER PAGO: R$ %.2f", amountPaid);

    return 0;
}
