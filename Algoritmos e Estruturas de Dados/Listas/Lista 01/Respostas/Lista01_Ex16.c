#include <stdio.h>

#define AMOUNT_CHEESE 2
#define AMOUNT_HAM 1
#define AMOUNT_BEEF 1

#define WEIGHT_CHEESE_UNITY 50
#define WEIGHT_HAM_UNITY 50
#define WEIGHT_BEEF_UNITY 100

#define CONVERT_KG 1000.0

int main(){

    int totalSandwiches = 0;
    printf("DIGITE A QUANTIDADE DE SANDUICHES A SEREM FEITOS: ");
    scanf("%d", &totalSandwiches);

    float cheeseWeightNeeded = (totalSandwiches * AMOUNT_CHEESE * WEIGHT_CHEESE_UNITY) / CONVERT_KG;
    float hamWeightNeeded = (totalSandwiches * AMOUNT_HAM * WEIGHT_HAM_UNITY) / CONVERT_KG;
    float beefWeightNeeded = (totalSandwiches * AMOUNT_BEEF * WEIGHT_BEEF_UNITY) / CONVERT_KG;

    printf("\nPARA PRODUZIR %d SANDUICHE(S), SERAO NECESSARIOS: %.2fKg DE QUEIJO, %.2fKg DE PRESUNTO E %.2fKg DE HAMBURGUER\n", totalSandwiches, cheeseWeightNeeded, hamWeightNeeded, beefWeightNeeded);

    return 0;
}
