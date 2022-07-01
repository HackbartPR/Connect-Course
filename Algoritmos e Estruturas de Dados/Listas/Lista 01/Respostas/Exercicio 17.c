#include <stdio.h>

int main(){

    float celsius = 0;
    printf("DIGITE A TEMPERATURA EM GRAUS CELSIUS: ");
    scanf("%f", &celsius);

    //(0ºC * 1.8) + 32 = 32ºF
    float fahrenheit = (celsius * 1.8) + 32;
    printf("\n%.1f CELSIUS E EQUIVALENTE A %.1f FAHRENHEIT\n", celsius, fahrenheit);

    return 0;
}
