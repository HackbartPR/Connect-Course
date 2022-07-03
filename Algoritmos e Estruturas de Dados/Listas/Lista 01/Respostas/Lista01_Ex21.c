#include <stdio.h>

#define SMALL_ML 350
#define MEDIUM_ML 600
#define BIG_ML 2000
#define CONVERT_LITER 1000.0

int main(){

    int amountSmallCoke = 0;
    printf("QUANTIDADE COMPRADA [LATA 350ML]: ");
    scanf("%d", &amountSmallCoke);

    int amountMediumCoke = 0;
    printf("QUANTIDADE COMPRADA [GARRAFA 600ML]: ");
    scanf("%d", &amountMediumCoke);

    int amountBigCoke = 0;
    printf("QUANTIDADE COMPRADA [GARRAFA 2L]: ");
    scanf("%d", &amountBigCoke);

    float volumeCokeTotal = ((amountSmallCoke * SMALL_ML) + (amountMediumCoke * MEDIUM_ML) + (amountBigCoke * BIG_ML)) / CONVERT_LITER;
    printf("\nLITRO TOTAL: %.2fL\n", volumeCokeTotal);

    return 0;
}
