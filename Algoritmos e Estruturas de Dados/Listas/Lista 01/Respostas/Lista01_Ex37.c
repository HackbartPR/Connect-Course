#include <stdio.h>

int main(){

    int number = 0;
    printf("DIGITE UM NUMERO INTEIRO DE 1 A 9 PARA CERIFICAR SUA TABUADA: ");
    scanf("%d", &number);

    for(int i = 1; i <= 10; i++){
        int value = number * i;
        printf("%d x %d = %d\n", number, i, value);
    }

    return 0;
}
