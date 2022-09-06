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
    int vogal = 0;
    int consoante = 0;

    while(fscanf(arq, "%c", &letra) != EOF){
        letra = toupper(letra);

        if(letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') vogal++;
        else if(letra != '\n' && letra != '\0' && letra != ' ')consoante++;
    }

    fclose(arq);

    printf("O ARQUIVO POSSUI %d VOGAIS\n", vogal);
    printf("O ARQUIVO POSSUI %d CONSOANTES\n", consoante);

    return 0;
}
