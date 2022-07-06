#include <stdio.h>


int main(){

    float balance = 0;
    printf("DIGITE SEU SALDO MEDIO NO ULTIMO ANO:");
    scanf("%f", &balance);

    if(balance < 0){
        printf("\nDIGITE UM VALOR VALIDO\n");
        return 0;
    }

    float credit = 0;
    if(balance <= 200)
        credit = 0;
    else if(balance > 200 && balance <= 400)
        credit = 20;
    else if(balance > 400 && balance <= 600)
        credit = 30;
    else
        credit = 40;

    printf("\nCOM O SALDO MEDIO DE %.2f O CREDITO A SER RECEBIDO SERA DE %.2f%%", balance, credit);

    return 0;
}
