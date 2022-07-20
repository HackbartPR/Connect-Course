#include <stdio.h>

#define _MAX 10

int main(){
    int array[_MAX];
    int countSmaller = 0;
    int countEqual = 0;
    int countBigger = 0;

    for(int i=0; i<_MAX; i++){
        printf("DIGITE O %d%c VALOR DO VETOR: ", i+1, 167);
        scanf("%d", &array[i]);

        if(array[i] < 15) countSmaller++;
        if(array[i] > 15) countBigger++;
        if(array[i] == 15) countEqual++;
    }

    printf("\nQUANTIDADE DE NUMEROS MENORES QUE 15: %d", countSmaller);
    printf("\nQUANTIDADE DE NUMEROS IGUAIS A 15: %d", countEqual);
    printf("\nQUANTIDADE DE NUMEROS MAIORES QUE 15: %d", countBigger);

    return 0;
}
