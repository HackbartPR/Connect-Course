#include <stdio.h>

int main(){

    float x = 0;
    printf("DIGITE A MEDIDA DO PRIMEIRO LADO DO TRIANGULO [X]: ");
    scanf("%f", &x);

    float y = 0;
    printf("DIGITE A MEDIDA DO SEGUNDO LADO DO TRIANGULO [Y]: ");
    scanf("%f", &y);

    float z = 0;
    printf("DIGITE A MEDIDA DO TERCEIRO LADO DO TRIANGULO [Z]: ");
    scanf("%f", &z);

    //VERIFICA SE NÃO É UM TRIANGULO
    if((x >= y+z) || (y >= x+z) || (z >= y+x)){
            printf("\nPELAS MEDIDAS INFORMADAS, A FORMA GEOMETRICA NAO SE IDENTIFICA COMO UM TRIANGULO");
            return 0;
    }

    if(x == y && x == z)
        printf("\nESTE E UM TRIANGULO EQUILATERO");
    else if(x == y || x == z || y == z)
        printf("\nESTE E UM TRIANGULO ISOSCELES");
    else
        printf("\nESTE E UM TRIANGULO ESCALENO");

    return 0;
}
