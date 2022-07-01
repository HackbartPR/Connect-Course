#include <stdio.h>

#define NORMAL_HOUR_VALUE 10
#define EXTRA_HOUR_VALUE 15
#define MAXIMUM_HOUR_BY_MONTH 220
#define SUBT_TAXES 0.9

int main(){

    int hourWorked = 0;
    printf("DIGITE A QUANTIDADE DE HORAS TRABALHADAS NO MES: ");
    scanf("%d", &hourWorked);

    int extraHourWorked = 0;

    if(hourWorked > 220)
        extraHourWorked = hourWorked - MAXIMUM_HOUR_BY_MONTH;

    int normalValueToReceive = (hourWorked - extraHourWorked) * NORMAL_HOUR_VALUE;
    int extraValueToReceive = extraHourWorked * EXTRA_HOUR_VALUE;

    int grossSalary =  normalValueToReceive + extraValueToReceive;
    float netSalary = grossSalary * SUBT_TAXES;

    printf("\nVOCE TRABALHOU %d HORA(S) NO MES, SENDO %d HORA(S) EXTRA(S)\n", hourWorked, extraHourWorked);
    printf("SALARIO BRUTO: R$%d.00, SENDO R$%d.00 HORAS NORMAIS + R$%d.00 HORAS EXTRAS \n", grossSalary, normalValueToReceive, extraValueToReceive);
    printf("SALARIO LIQUIDO: R$%.2f\n", netSalary);

    return 0;
}
