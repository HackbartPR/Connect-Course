#include <stdio.h>

int main() {

    float gasPrice = 0;
    printf("QUAL O VALOR DE 1 LITRO DE GASOLINA: ");
    scanf("%f", &gasPrice);

    float amountPaid = 0;
    printf("QUAL O VALOR TOTAL PAGO: ");
    scanf("%f", &amountPaid);

    float amountGasLiter = amountPaid / gasPrice;
    printf("\nFOI INSERIDO %.2f LITROS DE COMBUSTIVEL\n ", amountGasLiter);

    return 0;
}
