#include <stdio.h>

int main(){

    float first = 0;
    printf("DIGITE O PRIMEIRO NUMERO: ");
    scanf("%f", &first);

    float second = 0;
    printf("DIGITE O SEGUNDO NUMERO: ");
    scanf("%f", &second);

    float bigger = first;

    if(second > bigger)
        bigger = second;

    printf("\nO NUMERO MAIOR E: %.2f\n", bigger);

    return 0;
}
