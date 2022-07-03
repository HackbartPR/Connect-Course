#include <stdio.h>
#include <math.h>

int main(){

    printf("PARA CALCULAR A HIPOTENUSA DE UM TRIANGULO, SERA NECESSARIO INFORMAR OS VALORES DOS CATETOS.\n");

    double opposite = 0;
    printf("DIGITE O VALOR DO CATETO OPOSTO: ");
    scanf("%lf", &opposite);

    double adjacent = 0;
    printf("DIGITE O VALOR DO CATETO ADJACENTE: ");
    scanf("%lf", &adjacent);

    double hypotenuse = sqrt(pow(opposite, 2) + pow(adjacent, 2));
    printf("\nCATETO ADJACENTE: %.1lf CATETO OPOSTO: %.1lf HIPOTENUSA: %.1f\n",adjacent, opposite, hypotenuse);

    return 0;
}
