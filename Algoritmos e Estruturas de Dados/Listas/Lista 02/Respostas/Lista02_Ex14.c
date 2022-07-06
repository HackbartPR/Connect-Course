#include <stdio.h>

#define TAXE_BEFORE_1990 0.01
#define TAXE_AFTER_1990 0.015

int main(){

    int year = 0;
    printf("DIGITE O ANO DO CARRO: ");
    scanf("%d", &year);

    float price = 0;
    printf("DIGITE O VALOR DO CARRO DE ACORDO COM A TABELA: ");
    scanf("%f", &price);

    float taxes = 0;
    year < 1990 ? (taxes = price * TAXE_BEFORE_1990) : (taxes = price * TAXE_AFTER_1990);

    printf("\nO VALOR DO JUROS A SER PAGO E DE R$%.2f\n", taxes);

    return 0;
}
