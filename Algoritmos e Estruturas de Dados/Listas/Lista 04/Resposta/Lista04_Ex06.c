#include <stdio.h>

#define _MAX 10

int main(){
    int array[_MAX];
    int bigger = 0;
    int indexBigger = 0;
    int smaller = 0;
    int indexSmaller = 0;

    for(int i=0; i<_MAX; i++){
        printf("DIGITE O %d%c VALOR DO VETOR: ", i+1, 167);
        scanf("%d", &array[i]);

        if(i == 0){
            bigger = array[i];
            indexBigger = i;
            smaller = array[i];
            indexSmaller = i;
        }else if(array[i] > bigger){
            bigger = array[i];
            indexBigger = i;
        }else if(array[i] < smaller){
            smaller = array[i];
            indexSmaller = i;
        }
    }

    printf("\n%d E O MAIOR NUMERO QUE ESTA LOCALIZADO NA POSICAO %d", bigger, indexBigger);
    printf("\n%d E O MENOR NUMERO QUE ESTA LOCALIZADO NA POSICAO %d\n", smaller, indexSmaller);

    return 0;
}
