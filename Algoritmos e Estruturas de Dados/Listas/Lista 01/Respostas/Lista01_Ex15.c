#include <stdio.h>

#define NUMBER_PEOPLE 3

int main(){

    float bill = 0;
    printf("DIGITE O VALOR DA CONTA: ");
    scanf("%f", &bill);

    int carlosBill = (bill / NUMBER_PEOPLE);
    int andreBill = (bill / NUMBER_PEOPLE);
    float felipeBill = bill - (carlosBill + andreBill);

    printf("\nO VALOR DE R$%.2f RESULTOU EM R$%d.00 PARA CARLOS, R$%d.00 PARA ANDRE E R$%.2f PARA FELIPE\n", bill, carlosBill, andreBill, felipeBill);

    return 0;
}
