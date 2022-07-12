#include <stdio.h>


int main(){

    float num = 0;
    float sum = 0;

    do{
        printf("DIGITE UM NUMERO: ");
        scanf("%f", &num);

        if(num >=0) sum += num;

    }while(num >= 0);

    printf("\nA SOMA DOS VALORES DIGITADOS E IGUAL A %.1f", sum);

    return 0;
}
