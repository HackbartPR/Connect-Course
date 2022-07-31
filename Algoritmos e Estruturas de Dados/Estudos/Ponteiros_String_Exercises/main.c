#include <stdio.h>
#include <stdlib.h>

int strlen(char *vetor);
char *strchr(char *vetor, int lenght, char letra);

int main()
{
    //ESCREVER VETOR[] É O MESMO QUE ESCREVER *VETOR
    static char vetor[] = "Carlos";
    int lenght = strlen(vetor);

    char *resp = strchr(vetor, lenght, 'r');
    printf("\nResultado: \nEndereco: %x\nConteudo: %c\n", resp, *resp);


    return 0;
}

int strlen(char *vetor){
    int i=0;

    while(vetor[i] != '\0')
        i++;

    return i;
}

char *strchr(char *vetor, int lenght, char letra){
    //CRIAR UM PONTEIRO PARA SERVIR COMO RESPOSTA
    static char *resp;
    //PERCORRER O VETOR FORNECIDO
    for(int i=0; i<lenght; i++){
        if(vetor[i] == letra)
            resp = &vetor[i]; //SALVA O ENDEREÇO DE MEMORIA ONDE A LETRA ESTÁ SALVA
        printf("Letra %c: %x\n", vetor[i], &vetor[i]);
    }

    //RETORNA O PONTEIRO
    return resp;
}


