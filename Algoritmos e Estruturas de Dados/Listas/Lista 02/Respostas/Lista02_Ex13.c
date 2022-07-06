#include <stdio.h>

#define HUNDRED_NOTE 100
#define FIFTY_NOTE 50
#define TEN_NOTE 10
#define FIVE_NOTE 5
#define ONE_NOTE 1

int main(){

    float value = 0;
    printf("DIGITE UM VALOR INTEIRO EM REAIS: ");
    scanf("%f", &value);

    int amountHundredNotes = 0;
    if(value >= HUNDRED_NOTE){
        amountHundredNotes = value / HUNDRED_NOTE;
        value -=amountHundredNotes * HUNDRED_NOTE;
    }

    int amountFiftyNotes = 0;
    if(value >= FIFTY_NOTE){
        amountFiftyNotes = value / FIFTY_NOTE;
        value -= amountFiftyNotes * FIFTY_NOTE;
    }

    int amountTenNotes = 0;
    if(value >= TEN_NOTE){
        amountTenNotes = value / TEN_NOTE;
        value -= amountTenNotes * TEN_NOTE;
    }

    int amountFiveNotes = 0;
    if(value >= FIVE_NOTE){
        amountFiveNotes = value / FIVE_NOTE;
        value -= amountFiveNotes * FIVE_NOTE;
    }

    int amountOneNotes = 0;
    if(value >= ONE_NOTE){
        amountOneNotes = value / ONE_NOTE;
        value -= amountOneNotes * ONE_NOTE;
    }

    printf("\nO VALOR DE R$%.2f PODE SER COMPOSTO POR: ", value);
    printf("\n%d NOTAS DE R$100", amountHundredNotes);
    printf("\n%d NOTAS DE R$50", amountFiftyNotes);
    printf("\n%d NOTAS DE R$10", amountTenNotes);
    printf("\n%d NOTAS DE R$5", amountFiveNotes);
    printf("\n%d NOTAS DE R$1", amountOneNotes);

    return 0;
}
