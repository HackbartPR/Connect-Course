#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    char fone[12];
} CONTACT;

int main()
{
    //PREENCHER TABELA DE CONTATOS
    CONTACT agenda[] = {
        {"Lais Joaquim da Silva", "45991514356"},
        {"Carlos Guilherme", "45921534356"},
        {"Matheus Hackbart", "27921534346"},
        {"Carlos Alberto", "49921534248"},
    };

    int count = 1;

    //PERCORRE TODAS AS POSIÇÕES DA TABELA
    while(count < 4){

        //SEPARA A POSIÇÃO ATUAL ONDE LOCALIZARÁ O MENOR CARACTERE
        CONTACT smaller = agenda[count-1];
        int position = count-1;

        //PERCORRE UMA UNICA VEZ TODOS OS CAMPOS PROCURANDO O MENOR CARACTERE
        for(int i=count; i<4; i++){

            int countEqual = 0;
            int isContinue = 0;

            //REALIZA A VERIFICAÇÃO DO MESMO CAMPO VÁRIAS VEZES PARA VERIFICAR NOMES IGUAIS
            do{

                //CASO OS CARACTERES SEJAM IGUAIS, AAVANÇA UMA POSIÇÃO NO NOME
                if(agenda[i].name[countEqual] == smaller.name[countEqual]){
                    countEqual++;
                    isContinue = 1;
                }

                //CASO OS NOMES NÃO SEJAM IGUAIS, REALIZA A VERIFICAÇÃO DO MAIOR
                if(agenda[i].name[countEqual] < smaller.name[countEqual]){
                    strcpy(smaller.name, agenda[i].name);
                    strcpy(smaller.fone, agenda[i].fone);
                    position = i;
                    isContinue = 0;
                    countEqual = 0;
                }

            }while(isContinue);
        }

        //COM O MENOR NOME DA RODADA, TROCA COM APOSIÇÃO DO MENOS NOME
        CONTACT temp;
        strcpy(temp.name, agenda[count-1].name);
        strcpy(temp.fone, agenda[count-1].fone);

        strcpy(agenda[count-1].name, smaller.name);
        strcpy(agenda[count-1].fone, smaller.fone);

        strcpy(agenda[position].name, temp.name);
        strcpy(agenda[position].fone, temp.fone);


        count++;
    }


    //MOSTRAR A ORDEM FINAL
    for(int i=0; i<4; i++){
        printf("\nNOME: %s\n", agenda[i].name);
        printf("FONE: %s\n", agenda[i].fone);
    }

    return 0;
}
