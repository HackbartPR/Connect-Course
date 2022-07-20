#include <stdio.h>

#define _MAX 5

int main(){
    int array[_MAX];
    int small = 0;
    int index = 0;

    for(int i=0; i<_MAX; i++){
        printf("DIGITE O %d%c DO VETOR: ", i+1, 167);
        scanf("%d", &array[i]);

        if(i == 0) small = array[i];
    }



    return 0;
}
