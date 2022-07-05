#include <stdio.h>

int main(){

    int num1 = 0;
    printf("DIGITE UM NUMERO QUALQUER: ");
    scanf("%d", &num1);

    if(num1 % 2 == 0){
        num1 += 5;
        printf("\nDEVIDO O NUMERO SER PAR O RESULTADO E: %d\n", num1);
    }else{
        num1 += 8;
        printf("\nDEVIDO O NUMERO SER NEGATIVO O RESULTADO E: %d\n", num1);
    }

    return 0;
}
