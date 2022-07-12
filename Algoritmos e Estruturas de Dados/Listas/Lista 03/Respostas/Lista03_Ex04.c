#include <stdio.h>

int main(){

    printf("DIGITE UM NOME: ");
    int name[50];
    scanf("%s", name);

    printf("DIGITE A QUANTIDADE DE VEZES QUE DESEJA EXECUTAR: ");
    int repeat = 0;
    scanf("%d", &repeat);

    for(int i=0; i < repeat; i++)
        printf("%s\n", name);

    return 0;
}
