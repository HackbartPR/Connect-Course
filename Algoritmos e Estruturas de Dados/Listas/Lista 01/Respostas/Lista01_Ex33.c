#include <stdio.h>


int main(){

    printf("          1        \n");
    printf("        _____      \n");
    printf("  |    /     \\     \n");
    printf(" 2|   /       \\    \n");
    printf("  |  /         \\   \n");
    printf("  | /___________\\  \n");
    printf("          3        \n");
    printf("\nDIGITE AS DIMENSOES ,EM METROS, DO TRAPEZIO INDICADAS PELOS NUMEROS: \n");

    float smallBase = 0;
    printf("1 - BASE MENOR: ");
    scanf("%f", &smallBase);

    float height = 0;
    printf("2 - ALTURA: ");
    scanf("%f", &height);

    float bigBase = 0;
    printf("3 - BASE MAIOR: ");
    scanf("%f", &bigBase);

    float area = ((bigBase + smallBase) * height) / 2;
    printf("\nA AREA DO TRAPEZIO INDICADO E DE %.1f METROS QUADRADOS\n", area);

    return 0;
}
