#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arq = fopen("texto.txt", "r");

    //VERIFICA SE O TEXTO ESTÁ VAZIO
    if(arq == EOF) printf("Arquivo em branco!");

    char txt[100];
    fgets(txt, "%s", arq );

    int i = 0;
    int count = 0;

    do{
        if(txt[i] == '\n') count++;
        i++;
    }while(txt[i] != '\0');

    printf("%d", count);
    return 0;
}
