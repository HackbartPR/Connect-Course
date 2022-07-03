#include <stdio.h>
#include <stdlib.h>

#define CONV_YEAR_DAY 365.0
#define CONV_MONTH_DAY 30.0
#define CONV_WEEK_DAY 7.0

int main(){

    int currentDay = 0;
    int currentMonth = 0;
    int currentYear = 0;
    printf("DIGITE A DATA ATUAL, SEGUINDO O PADRAO DD MM AAAA: ");
    scanf("%d %d %d", &currentDay, &currentMonth, &currentYear);

    int bornDay = 0;
    int bornMonth = 0;
    int bornYear = 0;
    printf("DIGITE SUA DATA DE NASCIMENTO, SEGUINDO O PADRAO DD MM AAAA: ");
    scanf("%d %d %d", &bornDay, &bornMonth, &bornYear);

    int diffYear = currentYear - bornYear;
    int diffMonth = currentMonth - bornMonth;
    int diffDay = currentDay - bornDay;

    int totalDays = (diffYear * CONV_YEAR_DAY) + (diffMonth * CONV_MONTH_DAY) + diffDay;
    printf("\nVOCE POSSUI %d DIAS DE VIDAS.\n", totalDays);

    float totalWeeks = totalDays / CONV_WEEK_DAY;
    printf("VOCE POSSUI %.1f SEMANAS DE VIDAS.\n", totalWeeks);

    float totalMonths = totalDays / CONV_MONTH_DAY;
    printf("VOCE POSSUI %.1f MESES DE VIDAS.\n", totalMonths);

    float totalYears = totalDays / CONV_YEAR_DAY;
    printf("VOCE POSSUI %.1f ANOS DE VIDAS.\n", totalYears);

    return 0;
}
