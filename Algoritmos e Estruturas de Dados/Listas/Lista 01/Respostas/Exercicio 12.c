#include <stdio.h>

#define INCREASE 1.15
#define TAXES 0.92

int main(){

    float currentSalary = 0;
    printf("DIGITE O SALARIO ATUAL: ");
    scanf("%f", &currentSalary);

    float newSalary = (currentSalary * INCREASE) * TAXES;
    printf("\nSEU NOVO SALARIO E DE R$ %.2f\n\n", newSalary);

    return 0;
}
