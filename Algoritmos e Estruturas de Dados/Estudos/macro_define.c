#include <stdio.h>

#define eh_minusculo(n) ((n >= 97 && n <= 122) ? printf("Minusculo") : printf("Nao e Minusculo"))
#define eh_maiusculo(n) ((n >= 65 && n <= 90) ? printf("Maiusculo") : printf("Nao e Maiusculo"))

int main(){

    eh_minusculo('C');
    printf("\n");
    eh_minusculo('c');
    printf("\n");
    eh_maiusculo('A');
    printf("\n");
    eh_maiusculo('a');

    return 0;
}


