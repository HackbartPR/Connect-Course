#include <stdio.h>

#define _MAX 20

int main(){

    int num[_MAX];
    int count = 0;

    for(int i=1; i <= _MAX; i++){
        printf("DIGITE O %d%c NUMERO: ", i,167);
        scanf("%d", &num[i]);

        if(num[i]>=0 && num[i] <=100) count++;
    }

    printf("\n%d NUMEROS ESTAO ENTRE O INTERVALOR DE 0-100 \n",count);

    return 0;
}
