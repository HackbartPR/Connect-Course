#include <stdio.h>

int main(){

    printf("QUANTOS PRODUTOS FORAM COMPRADOS? ");
    int amount = 0;
    scanf("%d", &amount);

    float sum = 0;
    for(int i=1; i<=amount; i++){
        printf("DIGITE O VALOR DO %d%c PRODUTO: ",i,167);
        float tempValue = 0;
        scanf("%f", &tempValue);

        sum += tempValue;
    }

    printf("\nO VALOR TOTAL DA COMPRA E DE R$%.2f\n", sum);

    return 0;
}
