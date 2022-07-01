#include <stdio.h>

#define WOOL_NEEDED_BY_SHIRT 68

int main(){

    int amountShirt = 0;
    printf("DIGITE A QUANTIDADE DE BLUSAS QUE DESEJA PRODUZIR: ");
    scanf("%d", &amountShirt);

    int totalWoolNeeded = amountShirt * WOOL_NEEDED_BY_SHIRT;
    printf("\nPARA PRODUZIR %d BLUSAS, SERA NECESSARIO %d NOVELOS DE LA\n", amountShirt, totalWoolNeeded);

    return 0;
}
