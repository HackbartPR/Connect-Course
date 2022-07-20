#include <stdio.h>

#define _MAX 10

int main(){
    int arrayA[_MAX];
    int arrayB[_MAX];
    int arrayC[_MAX];

    for(int i=0; i<_MAX; i++){
        printf("DIGITE O %d%c VALOR DO VETOR A: ", i+1, 167);
        scanf("%d", &arrayA[i]);
    }

    for(int i=0; i<_MAX; i++){
        printf("DIGITE O %d%c VALOR DO VETOR B: ", i+1, 167);
        scanf("%d", &arrayB[i]);

        arrayC[i] = arrayA[i] + arrayB[i];
    }

    for(int i=0; i<_MAX;i++)
        printf("VETOR C NA %d POSICAO: %d\n", i, arrayC[i]);

    return 0;
}
