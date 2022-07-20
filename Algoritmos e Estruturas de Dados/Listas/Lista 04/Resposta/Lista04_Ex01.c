#include <stdio.h>

#define _MAX 10

int main(){
    int array1[_MAX];
    int array2[_MAX];
    int array3[_MAX];

    for(int i=0; i<_MAX; i++){
        printf("DIGITE O %d%c VALOR DO VETOR 01: ", i+1, 167);
        scanf("%d", &array1[i]);
    }

    for(int i=0; i<_MAX; i++){
        printf("DIGITE O %d%c VALOR DO VETOR 02: ", i+1, 167);
        scanf("%d", &array2[i]);

        array3[i] = array1[i] + array2[i];
    }

    for(int i=0; i<_MAX;i++)
        printf("VETOR SOMA NA %d POSICAO: %d\n", i, array3[i]);

    return 0;
}
