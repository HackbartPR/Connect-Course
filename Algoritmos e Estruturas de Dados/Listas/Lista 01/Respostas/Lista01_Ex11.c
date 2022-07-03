#include <stdio.h>

#define DAYS_IN_YEAR 365
#define DAYS_IN_MONTH 30

int main(){

    float totalDays = 0;
    printf("DIGITE A QUANTIDADE DE DIAS SEM ACIDENTES: ");
    scanf("%f", &totalDays);

    //RECEBE SOMENTE A PARTE INTEIRA EX: 370/365 = 1,03 RESP: 1
    int years = totalDays / DAYS_IN_YEAR;
    printf("Year: %d    ", years);

    //RECEBE SOMENTE A PARTE INTEIRA EX: (400-365) RETIRA OS ANOS => 35/30 => 1
    unsigned int months = (totalDays - ( years * DAYS_IN_YEAR)) / DAYS_IN_MONTH;
    printf("Months: %u     ", months);

    //RETIRA A QUANTIDADE DE ANOS E MESES PASSADOS EM DIAS E O RESTANTE SÃO OS DIAS
    int days = (totalDays - ( years * DAYS_IN_YEAR)) - (months * DAYS_IN_MONTH);
    printf("Days: %d     ", days);

    return 0;
}
