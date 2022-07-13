#include <stdio.h>

double fatorial(int num);

int main(){

    printf("DIGITE UM NUMERO INTEIRO PARA CALCULAR SEU FATORIAL: ");
    int num = 0;
    scanf("%d", &num);

    printf("O FATORIAL DE %d E: %.1lf\n", num, fatorial(num));

    return 0;
}

double fatorial(int num){
    if(num == 1) return 1;

    return num * fatorial(num-1);
}
