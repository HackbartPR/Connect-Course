#include <stdio.h>

#define _MAX 20

int main(){

    int age[_MAX];
    int count = 0;

    for(int i=1; i <= _MAX; i++){
        printf("DIGITE A %d%c IDADE: ", i,166);
        scanf("%d", &age[i]);

        if(age[i] >= 18) count++;
    }

    printf("\n%d PESSOAS SAO MAIORES DE IDADE\n",count);

    return 0;
}
