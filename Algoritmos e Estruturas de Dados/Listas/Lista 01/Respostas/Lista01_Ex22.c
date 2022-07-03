#include <stdio.h>

#define ONE_CENT 1
#define FIVE_CENT 5
#define TEN_CENT 10
#define TWENTY_FIVE_CENT 25
#define FIFTY_CENT 50

#define CONVERT_REAIS 100.0

int main(){

    printf("QUANTIDADE DE MOEDAS:\n");

    int amountOneCent = 0;
    printf("01 CENTAVO: ");
    scanf("%d", &amountOneCent);

    int amountFiveCent = 0;
    printf("05 CENTAVOS: ");
    scanf("%d", &amountFiveCent);

    int amountTenCent = 0;
    printf("10 CENTAVOS: ");
    scanf("%d", &amountTenCent);

    int amountTwentyFiveCent = 0;
    printf("25 CENTAVOS: ");
    scanf("%d", &amountTwentyFiveCent);

    int amountFiftyCent = 0;
    printf("50 CENTAVOS: ");
    scanf("%d", &amountFiftyCent);

    int totalCents = ((amountOneCent * ONE_CENT) + (amountFiveCent * FIVE_CENT) + (amountTenCent * TEN_CENT) + (amountTwentyFiveCent * TWENTY_FIVE_CENT) + (amountFiftyCent * FIFTY_CENT));
    float totalConverted = totalCents / CONVERT_REAIS;

    printf("\nVALOR TOTAL DE R$%.2f\n", totalConverted);

    return 0;
}
