#include <stdio.h>

#define _MAX 10

int main(){
    int array[_MAX];
    int isContinue = 0;
    int count = 0;

    for(int i=0; i<_MAX; i++){
        printf("DIGITE O %d%c DO VETOR: ", i+1, 167);
        scanf("%d", &array[i]);
    }

    while(isContinue < (_MAX - 1)){
        int temp = 0;

        if(count == _MAX -1) count = 0;

        if(array[count] > array[count+1]){
            temp = array[count+1];
            array[count+1] = array[count];
            array[count] = temp;
            isContinue = 0;
        }
        else isContinue++;

        count++;
    }

    for(int i=0; i<_MAX; i++)
        printf("VETOR ORDENADO: %d\n", array[i]);

    return 0;
}
