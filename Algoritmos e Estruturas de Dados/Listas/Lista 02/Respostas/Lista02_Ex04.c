#include <stdio.h>

int main(){

    float num1 = 0;
    printf("DIGITE UM NUMERO QUALQUER: ");
    scanf("%f", &num1);

    float result = 0;
    if(num1 >=0){
        result = num1 * 2;
        printf("\nDEVIDO O NUMERO SER POSITIVO O RESULTADO E: %.2f\n", result);
    }else{
        result = num1 * 3;
        printf("\nDEVIDO O NUMERO SER NEGATIVO O RESULTADO E: %.2f\n", result);
    }

    return 0;
}
