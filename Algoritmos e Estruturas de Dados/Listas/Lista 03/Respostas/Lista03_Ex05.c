#include <stdio.h>

int main(){

    int val[10];
    int sum = 0;

    for(int i=1; i <= 10; i++){
        printf("DIGITE O %d%c VALOR: ", i,167);
        scanf("%d", &val[i]);
        sum += val[i];
    }

    printf("\nA SOMA DOS VALORES INFORMADOS E: %d\n",sum);

    return 0;
}
