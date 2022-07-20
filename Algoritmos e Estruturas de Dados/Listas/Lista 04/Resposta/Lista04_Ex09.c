#include <stdio.h>

#define _MAX 10

int main(){
    int array[_MAX];
    int count = 0;
    int indexResult = 0;

    for(int i=0; i<_MAX; i++){
        printf("DIGITE O %d%c DO VETOR: ", i+1, 167);
        scanf("%d", &array[i]);

        if(array[i] > 0) count++;
    }

    int arrayResult[count];
    for(int i=0; i<_MAX; i++){
        if(array[i] > 0){
            arrayResult[indexResult] = array[i];
            indexResult++;
        }
    }

    for(int i=0; i<count;i++)
        printf("VETOR RESULTADO NA %d POSICAO: %d\n", i, arrayResult[i]);

    return 0;
}
