#include <stdio.h>
#include <stdlib.h>

#define _MAX 3

int main()
{
    //DEFINIÇÃO DE ESTRUTURAS
    typedef struct {
        int day;
        int month;
        int year;
    } DATA;

    typedef struct {
        char name[50];
        char fone[20];
        DATA nasc;
    } PESSOA;

    //DEFINIÇÃO DE VARIÁVEIS
    PESSOA contactList[_MAX];

    //LEITURA DE DADOS
    for(int i=0; i<_MAX; i++){
        printf("%d%C CONTATO\n", i+1, 167);

        printf("NOME: ");
        scanf("%s", contactList[i].name);

        printf("TELEFONE: ");
        scanf("%s", contactList[i].fone);

        printf("DIA DO NASCIMENTO: ");
        scanf("%d", &contactList[i].nasc.day);

        printf("MES DO NASCIMENTO: ");
        scanf("%d", &contactList[i].nasc.month);

        printf("ANO DO NASCIMENTO: ");
        scanf("%d", &contactList[i].nasc.year);

        system("clear || cls");
    }

    //MOSTRAR TODOS OS VALORES
    for(int i=0; i<_MAX; i++){
        printf("%d%C CONTATO\n", i+1, 167);
        printf("NOME: %s\n", contactList[i].name);
        printf("TELEFONE: %s\n", contactList[i].fone);
        printf("DATA NASCIMENTO: %d/%d/%d\n", contactList[i].nasc.day, contactList[i].nasc.month, contactList[i].nasc.year);

        printf("\n");
    }

    return 0;
}
