#include <stdio.h>

#define CASH_DISCOUNT 0.1
#define CREDIT_SUM_DISCOUNT 0.15
#define INSTALLMENT_INTEREST 0.1

int main(){

    float currentPrice = 0;
    printf("DIGITE O VALOR DA ETIQUETA DO PRODUTO: ");
    scanf("%f", &currentPrice);

    printf("\nCOMO DESEJA REALIZAR O PAGAMENTO:\n");
    printf("1 - A VISTA EM DINHEIRO OU CHEQUE, RECEBE 10%% DE DESCONTO\n");
    printf("2 - A VISTA NO CARTAO DE CREDITO, RECEBE 15%% DE DESCONTO\n");
    printf("3 - DUAS PARCELAS SEM JUROS\n");
    printf("4 - TRES OU MAIS PARCELAS COM JUROS DE 10%%\n");
    printf("QUAL A OPCAO DESEJADA: 1,2,3 OU 4? ");

    //REALIZANDO A LEITURA DA FORMA DE PAGAMENTO
    int choice = 0;
    scanf("%d", &choice);

    //CONFIGURANDO A QUANTIDADE DE PARCELAS
    int numberInstallment = 0;
    if(choice == 3)
        numberInstallment = 2;
    if(choice == 4){
        printf("\nDESEJA PAGAR EM QUANTAS PARCELAS? ");
        scanf("%d", &numberInstallment);
    }

    //RELIZANDO O CALCULO DO VALOR FINAL
    float finalPrice = 0;
    float installmentValue = 0;

    switch(choice){
    case 1:
        finalPrice = currentPrice * (1 - CASH_DISCOUNT);
        break;
    case 2:
        finalPrice = currentPrice * (1 - CREDIT_SUM_DISCOUNT);
        break;
    case 3:
        finalPrice = currentPrice;
        installmentValue = finalPrice / numberInstallment;
        break;
    case 4:
        finalPrice = currentPrice * (1 + INSTALLMENT_INTEREST);
        installmentValue = finalPrice / numberInstallment;
        break;
    default:
        printf("FORMA DE PAGAMENTO INVÁLIDA!");
    }

    //APRESENTANDO O RESULTADO FINAL
    if(installmentValue > 0)
        printf("\nSERA PAGO O VALOR DE R$%.2f EM %d PARCELAS DE R$%.2f\n", finalPrice, numberInstallment, installmentValue);
    else
        printf("\nO VALOR FINAL A SER PAGO COM DESCONTO, SERA DE R$%.2f\n", finalPrice);


    return 0;
}
