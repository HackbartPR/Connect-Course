#include <stdio.h>

int main(){

    printf("DIGITE UM NOME: ");
    int name[50];
    scanf("%s", name);

    for(int i=0; i <= 9; i++)
        printf("%s\n", name);

    return 0;
}
