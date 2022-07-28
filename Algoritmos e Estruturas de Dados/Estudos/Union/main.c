#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//A UNION SE ASSEMELHA MUITO COM A STRUCT, MAS A DIFERENÇA É QUE ELA OCUPA O MESMO ESPAÇO NA MEMÓRIA PARA TODAS VERIAVEIS, OU SEJA, É UMA VARÍVALE QUE PERMITE RECEBER N TIPOS DE DADOS.
typedef union {
    float volume;
    int massa;
} MUTANTE;

//É POSSÍVEL UTILIZAR A UNION DENTRO DE UMA STRUCT
typedef struct {
    char nome[50];
    float preco;
    MUTANTE peso;
} PRODUTO;

//AO CRIAR UMA UNION É USUALMENTE COMUM ETIQUETÁ-LA. A FUNÇÃO DA ETIQUETA É ARMAZENAR QUAL O VALOR QUE ESTÁ EM USO. PARA ISSO, USA-SE STRUCTS.
typedef struct {
    int etiqueta;
    union {
        char a; //1
        int b; //2
        float c; //3
    } valor;
} MUTANTE;

int main()
{
    PRODUTO item;
    strcpy(item.nome, "Feijao");
    item.preco = 20.50;
    item.peso.massa = 1;
    printf("%s => Preco: R$%.2f  Peso: %d Kg\n", item.nome, item.preco, item.peso.massa);

    PRODUTO item2;
    strcpy(item2.nome, "Refrigerante");
    item2.preco = 5.20;
    item2.peso.volume = 2.5;
    printf("%s => Preco: R$%.2f  Peso: %.2f L\n", item2.nome, item2.preco, item2.peso.volume);

    //EXEMPLO DE UNION ETIQUETADA
    MUTANTE var;
    var.etiqueta = 2; //MOSRTA QUE ESTOU UTILIZANDO O CAMPO B
    var.valor.b = 123;



    return 0;
}
