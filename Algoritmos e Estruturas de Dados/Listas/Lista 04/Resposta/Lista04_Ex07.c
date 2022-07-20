#include <stdio.h>

int main(){
    int arrayR[5];
    int arrayS[10];

    int count = 0;

    for(int i=0; i<5; i++){
        printf("DIGITE O %d%c VALOR DO VETOR R: ", i+1, 167);
        scanf("%d", &arrayR[i]);
    }

    for(int i=0; i<10; i++){
        printf("DIGITE O %d%c VALOR DO VETOR S: ", i+1, 167);
        scanf("%d", &arrayS[i]);
    }

    for(int i=0; i<10; i++){
        for(int j=0; j<5; j++){
            if(arrayS[j] == arrayR[j]) count++;
        }
    }

    int arrayX[count];
    for(int i=0; i<10; i++){
        for(int j=0; j<5; j++){
            if(arrayS[i] == arrayR[j]) arrayX[i] = arrayS[j];
        }
    }

    for(int i=0; i<5;i++)
        printf("VETOR RESULTADO NA %d POSICAO: %d\n", i, arrayS[i]);

    return 0;
}
