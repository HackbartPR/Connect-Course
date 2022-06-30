#include <stdio.h>

#define QUANT_DAY_IN_YEAR 365

int main() {
    char name[50];
    printf("DIGITE SEU NOME: ");
    scanf("%s", &name);

    int age = 0;
    printf("DIGITE SUA IDADE: ");
    scanf("%d", &age);

    unsigned int daysOfLife = age * QUANT_DAY_IN_YEAR;
    printf("%s, VOCE JA VIVEU %d DIAS\n", name , daysOfLife);

    return 0;
}
