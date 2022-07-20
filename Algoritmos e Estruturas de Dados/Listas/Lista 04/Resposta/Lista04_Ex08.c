#include <stdio.h>


int main(){
    int arrayR[5];
    int arrayA[10];
    int point = 0;

    for(int i=0; i<5; i++){
        printf("DIGITE O %d%c VALOR DA LOTO: ", i+1, 167);
        scanf("%d", &arrayR[i]);
    }

    for(int i=0; i<10; i++){
        printf("DIGITE O %d%c VALOR DA APOSTA: ", i+1, 167);
        scanf("%d", &arrayA[i]);
    }

    for(int i=0; i<5; i++){
        for(int j=0; j<10; j++){
            if(arrayR[i] == arrayA[j]) point++;
        }
    }

    printf("\nVOCE ACERTOU %d NUMEROS DA LOTO", point);

    return 0;
}
