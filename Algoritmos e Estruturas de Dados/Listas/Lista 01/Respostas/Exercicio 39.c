#include <stdio.h>
#include <stdlib.h>

#define SALARY 1200.00
#define FINE 0.02
#define FIRST_BILL 200.00
#define SECOND_BILL 120.00

int main(){

    float firstFine = FIRST_BILL * (1 + FINE);
    float secondFine = SECOND_BILL * (1 + FINE);

    float totalFine = firstFine + secondFine;
    float newSalary = SALARY - totalFine;

    printf("NOVO SALARIO SERA DE R$%.2f, JA EXCLUSO O VALOR A PAGAR DE R$%.2f DE MULTAS.\n", newSalary, totalFine);

    return 0;
}
