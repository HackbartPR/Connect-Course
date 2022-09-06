#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arq = fopen("texto.txt", "r");

    //VERIFICA SE O TEXTO ESTÁ VAZIO
    if(arq == EOF) {
        printf("Arquivo em branco!");
        return;
    }

    int count = 0;

    char letra;

    while( fscanf(arq, "%c", &letra) != EOF){
        if(letra == '\n') count++;
    }

    printf("Arquivo possui %d linhas\n", count);

    fclose(arq);
    return 0;
}
