#include <stdio.h>

int main(){

    printf("DIGITE UM VALOR INICIAL PARA UM INTERVALO: ");
    int start = 0;
    scanf("%d", &start);

    printf("DIGITE UM VALOR FINAL PARA UM INTERVALO: ");
    int end = 0;
    scanf("%d", &end);

    int sum = 0;
    for(int i = start; i <= end; i++)
        sum += i;

    printf("\nA SOMA DOS VALORES NO INTERVALO %d-%d E %d\n", start,end,sum);

    return 0;
}
