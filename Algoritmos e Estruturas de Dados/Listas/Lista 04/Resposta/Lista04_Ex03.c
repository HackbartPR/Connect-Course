#include <stdio.h>

#define _MAX 8

int main(){
    int array[_MAX];
    int arrayResult[_MAX];

    for(int i=0; i<_MAX; i++){
        printf("DIGITE O %d%c VALOR DO VETOR: ", i+1, 167);
        scanf("%d", &array[i]);

        arrayResult[i] = array[i] * 2;
    }

    for(int i=0; i<_MAX;i++)
        printf("VETOR RESULTADO NA %d POSICAO: %d\n", i, arrayResult[i]);

    return 0;
}
