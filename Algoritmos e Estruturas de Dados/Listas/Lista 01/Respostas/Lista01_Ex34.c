#include <stdio.h>


int main(){

    float base = 0;
    printf("DIGITE O TAMANHO, EM METROS, DE UM LADO DO QUADRADO: ");
    scanf("%f", &base);

    float area = base * base;
    printf("\nA AREA DO QUADRADO E DE %.1f METROS QUADRADOS\n", area);

    return 0;
}
