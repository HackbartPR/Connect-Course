#include <stdio.h>

int main(){

    int first = 0;
    printf("DIGITE PRIMEIRO NUMERO INTEIRO: ");
    scanf("%d", &first);

    int second = 0;
    printf("DIGITE SEGUNDO NUMERO INTEIRO: ");
    scanf("%d", &second);

    int result = 0;
    first >= second ? (result = first - second) : (result = second - first);

    printf("\nA DIFERENCA ENTRE OS NUMEROS DIGITADOS E %d", result);

    return 0;
}
