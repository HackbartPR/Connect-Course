#include <stdio.h>

#define _MAX 20

int main(){
    int array[_MAX];
    int countEven = 0;
    int countOdd = 0;
    int countBigger = 0;
    int countSmaller = 0;

    for(int i=0; i<_MAX; i++){
        printf("DIGITE O %d%c VALOR DO VETOR 01: ", i+1, 167);
        scanf("%d", &array[i]);

        (array[i] % 2 == 0) ? countEven++ : countOdd++;
        if(array[i] > 50) countBigger++;
        if(array[i] < 7) countSmaller++;
    }

    printf("\nQUANTIDADE DE NUMEROS PARES: %d", countEven);
    printf("\nQUANTIDADE DE NUMEROS IMPARES: %d", countOdd);
    printf("\nQUANTIDADE DE NUMEROS MAIORES QUE 50: %d", countBigger);
    printf("\nQUANTIDADE DE NUMEROS MENORES QUE 7: %d", countSmaller);

    return 0;
}
