#include <stdio.h>

int main(){

    int num1 = 0;
    printf("DIGITE UM NUMERO QUALQUER: ");
    scanf("%D", &num1);

    printf(num1 % 2 == 0 ? "O NUMERO %d E PAR" : "NUMERO %d E IMPAR", num1);

    return 0;
}
