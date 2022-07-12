#include <stdio.h>

#define _MAX 5

int main(){

    int num[_MAX];
    int firstInterval = 0;
    int secondInterval = 0;
    int thirdInterval = 0;

    for(int i=1; i <= _MAX; i++){
        printf("DIGITE O %d%c NUMERO: ", i,167);
        scanf("%d", &num[i]);

        if(num[i]>=0 && num[i] <=100) firstInterval++;
        if(num[i]>=101 && num[i] <=200) secondInterval++;
        if(num[i]>200) thirdInterval++;
    }

    printf("\n%d NUMEROS ESTAO ENTRE O INTERVALOR DE 0-100 \n",firstInterval);
    printf("%d NUMEROS ESTAO ENTRE O INTERVALOR DE 101-200 \n",secondInterval);
    printf("%d NUMEROS SAO MAIORES QUE 200 \n",thirdInterval);

    return 0;
}
