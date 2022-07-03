#include <stdio.h>


int main(){

    printf("        1       \n");
    printf("       /|\\     \n");
    printf("      / | \\    \n");
    printf("     /  |  \\   \n");
    printf("    /   |   \\  \n");
    printf(" 2 /____|____\\ \n");
    printf("   \\    |    /  \n");
    printf("    \\   |   /   \n");
    printf("     \\  |  /    \n");
    printf("      \\ | /    \n");
    printf("       \\|/    \n");
    printf("\nDIGITE AS DIMENSOES ,EM METROS, DO LOSANGULO INDICADAS PELOS NUMEROS: \n");

    float bigBase = 0;
    printf("1 - DIAGONAL MAIOR: ");
    scanf("%f", &bigBase);

    float smallBase = 0;
    printf("2 - DIAGONAL MENOR: ");
    scanf("%f", &smallBase);

    float area = (smallBase * bigBase) / 2;
    printf("\nA AREA DO LOSANGULO INDICADO E DE %.1f METROS QUADRADOS\n", area);

    return 0;
}
