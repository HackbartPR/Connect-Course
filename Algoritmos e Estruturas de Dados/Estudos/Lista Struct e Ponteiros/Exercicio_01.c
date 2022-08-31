#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[80];
    int preco;
    int quant;
} PRODUTO;

void preencherCompra(PRODUTO *compra, int TAM);
void ordenarPorPreco(PRODUTO *compra, int TAM);
void imprimirCompra(PRODUTO *compra, int TAM);

int main(){
    int TAM = 0;

    printf("QUANTOS PRODUTOS FORAM COMPRADOS: ");
    scanf("%d", &TAM);

    PRODUTO *compra = malloc(TAM * sizeof(PRODUTO));

    //PREENCHE O VETOR
    preencherCompra(compra, TAM);

    //ORDENAR COMPRA POR PRECO
    ordenarPorPreco(compra, TAM);

    //IMPRIMIR COMPRA
    imprimirCompra(compra, TAM);

    return 0;

}

void preencherCompra(PRODUTO *compra, int TAM){

    printf("\n");

    for(int i=0; i<TAM; i++){
        printf("PREENCHA O %d%c PRODUTO: \n", i+1, 167);

        fflush(stdin);

        printf("NOME: ");
        gets(compra[i].nome);

        printf("PRECO: ");
        scanf("%d", &compra[i].preco);

        printf("QUANTIDADE: ");
        scanf("%d", &compra[i].quant);

        printf("\n");
    }
}

void ordenarPorPreco(PRODUTO *compra, int TAM){
    int index = 1;

    while(index < TAM){

        PRODUTO menor = compra[index-1];
        int posicao = index-1;

        for(int i = index; i < TAM; i++){
            if(compra[i].preco < menor.preco){
                menor = compra[i];
                posicao = i;
            }
        }

        PRODUTO aux = compra[index-1];
        compra[index-1] = menor;
        compra[posicao] = aux;

        index++;
    }
}

void imprimirCompra(PRODUTO *compra, int TAM){

    printf("\n");

    for(int i=0; i < TAM; i++){
        printf("%d%c PRODUTO: ", i+1, 167);

        printf("NOME: %s\n", compra[i].nome);

        printf("PRECO: %d\n", compra[i].preco);

        printf("QUANTIDADE: %d", compra[i].quant);

        printf("\n");
    }
}



