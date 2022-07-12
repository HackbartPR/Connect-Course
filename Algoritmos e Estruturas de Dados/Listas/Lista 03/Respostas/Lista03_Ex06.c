#include <stdio.h>

#define _MAX 20

int main(){

    int age[_MAX];
    float average = 0;

    for(int i=1; i <= _MAX; i++){
        printf("DIGITE A %d%c IDADE: ", i,166);
        scanf("%d", &age[i]);
        average += age[i];
    }

    average /= _MAX;
    printf("\nA MEDIA DAS IDADES INFORMADAS E: %f\n",average);

    return 0;
}
