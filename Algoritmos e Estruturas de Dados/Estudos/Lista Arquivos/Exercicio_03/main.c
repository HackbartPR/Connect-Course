#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char name[500];
    printf("DIGITE O NOME DO ARQUIVO QUE DESEJA LER, SEM A EXTENSAO: ");
    gets(name);

    strcat(name, ".txt");

    FILE *arq = fopen(name, "r");

    if(arq == NULL){
        printf("ARQUIVO NAO ENCONTRADO");
        return;
    }

    char letra;
    int count = 0;

    while(fscanf(arq, "%c", &letra) != EOF){
        letra = toupper(letra);
        if(letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') count++;
    }

    fclose(arq);

    printf("O ARQUIVO POSSUI %d VOGAIS\n", count);

    return 0;
}
