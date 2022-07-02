#include <stdio.h>

#define PORCENT_SALES 0.04

int main(){

    float currentSalary = 0;
    printf("DIGITE O SALARIO FIXO: ");
    scanf("%f", &currentSalary);

    float salesValue = 0;
    printf("DIGITE O VALOR DAS VENDAS REALIZADAS NESTE MES: ");
    scanf("%f", &salesValue);

    float salesProfit = salesValue * PORCENT_SALES;
    float newSalary = currentSalary + salesProfit;

    printf("\nO SALARIO DESTE MES SERA DE R$%.2f, SENDO QUE NESTE VALOR ESTA INCLUSO A COMISSAO DE R$%.2f\n", newSalary, salesProfit);

    return 0;
}
