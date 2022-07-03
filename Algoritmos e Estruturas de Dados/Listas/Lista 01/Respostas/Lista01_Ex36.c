#include <stdio.h>

int main(){

    float basicSalary = 0;
    printf("DIGITE O VALOR ATUAL DO SALARIO MINIMO: ");
    scanf("%f", &basicSalary);

    float currentSalary = 0;
    printf("DIGITE O VALOR BRUTO DO SEU SALARIO: ");
    scanf("%f", &currentSalary);

    float amountBigger = currentSalary / basicSalary;
    printf("\nATUALMENTE, VOCE RECEBE %.1f SALARIOS MINIMOS\n", amountBigger);

    return 0;
}
