#include <stdio.h>
#include <math.h>

int main(){

    float radius = 0;
    printf("DIGITE O RAIO DA PIZZA: ");
    scanf("%f", &radius);

    float area = M_PI * pow(radius,2);
    printf("AREA: %.2f", area);

    return 0;
}
