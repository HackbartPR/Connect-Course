#include <stdio.h>

#define AMOUNT_DAYS_MONTH 30

int main() {

    unsigned int day = 0;
    printf("DIGITE O DIA: ");
    scanf("%d", &day);

    unsigned int month = 0;
    printf("DIGITE O MES: ");
    scanf("%d", &month);

    unsigned int totalDays = month * AMOUNT_DAYS_MONTH + day;
    printf("JA SE PASSARAM %d DIAS DO ANO: ", totalDays);

    return 0;
}
