#include <stdio.h>
#include <stdlib.h>

int main()
{
    //CRIA O ARQUIVO
    FILE *arq = fopen("text.txt", "w+");

    char txt;

    //EXECUTE ATE O USUARIO DIGITAR 0
    do{
        printf("DIGITE UM CARACTERE: ");
        scanf("%c", &txt);
        printf("\n");

        //LIMPA O BUFFER
        fflush(stdin);

        //ESCREVE DENTRO DO ARQUIVO
        if(txt != '0') fprintf(arq, "%c", txt);

    }while(txt != '0');

    //LER OS VALORES SALVOS
    char txtSalvo[100];

    //REBOBINAR O ARQUIVO
    rewind(arq);

    //INSERE O TEXTO DO ARQUIVO NA VARIAVEL
    fscanf(arq, "%s", txtSalvo);

    //IMPRIME VALOR SALVO
    printf("%s", txtSalvo);

    //FECHA O ARRQUIVO ABERTO
    fclose(arq);

    return 0;
}
