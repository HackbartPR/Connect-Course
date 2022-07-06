#include <stdio.h>

#define LEVEL_ONE_VALUE 12.00
#define LEVEL_TWO_VALUE 17.00
#define LEVEL_THREE_VALUE 25.00

int main(){

    int level = 0;
    printf("DIGITE O NIVEL DO PROFESSOR (1, 2 OU 3): ");
    scanf("%d", &level);

    if(level != 1 && level != 2 && level != 3){
        printf("\nNIVEL NAO ENCONTRADO!");
        return 0;
    }

    float amountHour = 0;
    printf("DIGITE A QUANTIDADE DE HORAS/AULA DA SEMANA: ");
    scanf("%f", &amountHour);

    float salary = 0;
    if(level == 1)
        salary = LEVEL_ONE_VALUE * amountHour * 4.5;
    else if (level == 2)
        salary = LEVEL_TWO_VALUE * amountHour * 4.5;
    else
        salary = LEVEL_THREE_VALUE * amountHour * 4.5;

    printf("\nO SALARIO DA SEMANA SERA DE R$%.2f", salary);

    return 0;
}
