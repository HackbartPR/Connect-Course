#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int rg;
    int cpf;
    char nome[80];
} PESSOA;

void preencheCadastro(PESSOA pessoa, int TAM);

int main(){
    PESSOA cadastro[100];

    int TAM = 0;
    printf("DIGITE A QUANTIDADE DE PESSOAS QUE DESEJA CADASTRAR: ");
    scanf("%d",&TAM);

    //PREENCHE O CADASTRO
    preencheCadastro(cadastro, TAM);

    return 0;
}

void preencheCadastro(PESSOA pessoa, int TAM){
    for(int i = 0; i < TAM; i++){
        printf("%d%c PESSOA: ", i+1, 167);

        printf("NOME: ");
        gets(pessoa[i].nome);

        printf("RG: ");
        scanf("%d", &pessoa[i].rg);

        printf("CPF: ");
        scanf("%d", &pessoa[i].cpf);

        printf("\n");
    }
}

void imprimirCadastro(PESSOA pessoa, int TAM){
    for(int i = 0; i < TAM; i++){

    }
}
