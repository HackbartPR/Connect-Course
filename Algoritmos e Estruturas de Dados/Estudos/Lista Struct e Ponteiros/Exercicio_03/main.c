#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int rg;
    int cpf;
    char nome[80];
} PESSOA;

void preencheCadastro(PESSOA pessoa[], int TAM);
void imprimirCadastro(PESSOA pessoa[], int TAM);
void imprimirPessoa(int RG, PESSOA pessoa[], int TAM);
void ordenarCadastro (PESSOA pessoa[], int TAM);
int buscaBinaria(int RG, PESSOA cadastro[], int TAM);

int main(){
    int TAM = 0;
    printf("DIGITE A QUANTIDADE DE PESSOAS QUE DESEJA CADASTRAR: ");
    scanf("%d",&TAM);

    PESSOA cadastro[100];

    //PREENCHE O CADASTRO
    preencheCadastro(cadastro, TAM);

    //ORDENAR CADASTRO
    ordenarCadastro(cadastro, TAM);

    //LE O RG DESEJADO
    int RG = 0;
    printf("DIGITE O RG DESEJA PESQUISAR: ");
    scanf("%d", &RG);

    //TRAZ O ÍNDICE O RG PESQUISADO
    int result = buscaBinaria(RG, cadastro, TAM);
    if(result == -1) printf("RG NAO CADASTRADO");
    else imprimirPessoa(RG, cadastro, TAM);

    return 0;
}

void preencheCadastro(PESSOA pessoa[], int TAM){
    for(int i = 0; i < TAM; i++){
        fflush(stdin);

        printf("%d%c PESSOA: \n", i+1, 167);

        printf("NOME: ");
        gets(pessoa[i].nome);

        printf("RG: ");
        scanf("%d", &pessoa[i].rg);

        printf("CPF: ");
        scanf("%d", &pessoa[i].cpf);

        printf("\n");
    }
}

void imprimirCadastro(PESSOA pessoa[], int TAM){
    printf("\nIMPRESSAO DOS VALORES ORDENADOS:\n");

    for(int i = 0; i < TAM; i++){
        printf("%d%c PESSOA: \n", i+1, 167);
        printf("NOME: %s\n", pessoa[i].nome);
        printf("RG: %d\n", pessoa[i].rg);
        printf("CPF: %d\n", pessoa[i].cpf);
        printf("\n");
    }
}

void imprimirPessoa(int RG, PESSOA pessoa[], int TAM){
    printf("\nCADASTRO ENCONTRADO:\n");

    for(int i = 0; i < TAM; i++){
        if(pessoa[i].rg == RG){
            printf("[%d] INDICE: \n", i);
            printf("NOME: %s\n", pessoa[i].nome);
            printf("RG: %d\n", pessoa[i].rg);
            printf("CPF: %d\n", pessoa[i].cpf);
            printf("\n");
        }
    }
}

void ordenarCadastro (PESSOA pessoa[], int TAM){
    int index = 1;

    while(index < TAM){
        PESSOA menor = pessoa[index - 1];
        int posicao = index - 1;

        for(int i = index; i < TAM; i++){
            if(pessoa[i].rg < menor.rg){
                menor = pessoa[i];
                posicao = i;
            }
        }

        PESSOA aux = pessoa[index - 1];
        pessoa[index - 1] = menor;
        pessoa[posicao] = aux;

        index++;
    }
}

int buscaBinaria(int RG, PESSOA cadastro[], int TAM){
    //NÚMERO MÁXIMO DE COMPARAÇÕES
    int maxComp = 1 + (TAM / 2);

    //TAMANHO INICIADO DO ZERO
    int length = TAM - 1;

    //VERIFICA SE A QUANTIDADE DA AMOSTRA É PAR OU IMPAR
    int index = 0;
    if(length == 0) index = 0;
    else if(length % 2 == 0) index = length / 2;
    else index = (length / 2);

    int count = 1;

    while(count <= maxComp){
        //VERIFICA SE O ELEMENTO INDEX É IGUAL AO ELEMENTO DESEJADO
        if(cadastro[index].rg == RG) return index;

        //COMPARA SE O RG É MENOR
        if(RG < cadastro[index].rg){
            //VERIFICA SE O INDICE É PAR OU IMPAR
            if(index % 2 == 0) index /= 2;
            else index = (index - 1) / 2;
        }
        else{
            //VERIFICA SE O INDICE É PAR OU IMPAR
            if(index % 2 == 0) index = index + ((TAM - index) / 2);
            else index = (length - index) + ( (index + 1) / 2);
        }

        count++;
    }

    return -1;
}
