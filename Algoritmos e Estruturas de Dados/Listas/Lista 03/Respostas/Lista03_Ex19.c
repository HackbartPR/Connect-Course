#include <stdio.h>

#define _MAX 15

int main(){
    float smaller = 0;
    float taller = 0;

    for(int i=1; i <= _MAX; i++){
        printf("DIGITE A %d%c ALTURA [METROS]: ", i, 166);
        float currentHeight = 0;
        scanf("%f", &currentHeight);

        if(i == 1){
            smaller = currentHeight;
            taller = currentHeight;
        }

        if(currentHeight > taller) taller = currentHeight;
        if(currentHeight < smaller) smaller = currentHeight;
    }

    printf("\nA MENOR ALTURA E DE %.2f METROS", smaller);
    printf("\nA MAIOR ALTURA E DE %.2f METROS", taller);

    return 0;
}
