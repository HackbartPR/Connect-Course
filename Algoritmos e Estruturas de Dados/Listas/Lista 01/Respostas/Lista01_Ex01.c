#include <stdio.h>

void main(){
    printf("DIGITE A LARGURA DO TERRENO [M]: ");
    double width = 0;
    scanf("%lf", &width);

    printf("DIGITE O COMPRIMENTO DO TERRENO [M]: ");
    double heigth = 0;
    scanf("%lf", &heigth);

    double area = width * heigth;
    printf("AREA: %.2lf METROS QUADRADOS\n",area);
}
