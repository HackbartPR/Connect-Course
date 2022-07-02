#include <stdio.h>

#define DISCOUNT 0.9

int main(){

    float oldPrice = 0;
    printf("DIGITE O PRECO ATUAL DO PRODUTO: ");
    scanf("%f", &oldPrice);

    float newPrice = oldPrice * DISCOUNT;
    printf("COM DESCONTO DE 10%% O PRODUTO QUE CUSTAVA R$%.2f AGORA ESTA CUSTANDO R$%.2f", oldPrice, newPrice);

    return 0;
}
