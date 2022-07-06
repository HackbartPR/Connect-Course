#include <stdio.h>

#define PORC_MANAGER 0.1
#define PORC_ENGINEER 0.2
#define PORC_TECH 0.3
#define PORC_OTHERS 0.4

int main(){

    int choice = 0;
    printf("101 - GERENTE\n");
    printf("102 - ENGENHEIRO\n");
    printf("103 - TECNICO\n");
    printf("DIGITE SEU CARGO:");
    scanf("%d", &choice);

    float salary = 0;
    printf("DIGITE SEU SALARIO: ");
    scanf("%f", &salary);

    float newSalary = 0;

    if (choice == 101)
        newSalary = salary * (1 + PORC_MANAGER);
    else if (choice == 102)
        newSalary = salary * (1 + PORC_ENGINEER);
    else if (choice == 103)
        newSalary = salary * (1 + PORC_TECH);
    else
        newSalary = salary * (1 + PORC_OTHERS);

    float diff = newSalary - salary;
    printf("\nSEU SALARIO TEVE UM AUMENTO DE R$%.2f, INDO DE R$%.2f PARA O VALOR DE R$%.2f", diff, salary, newSalary);

    return 0;
}
