#include <stdio.h>
#include <stdlib.h>
void permuta(int *p, int *q);
//O NOME DA FUNÇÃO É UM PONTEIRO CONSTANTE PARA UMA SEQUÊNCIA DE CÓDIGOS
int main()
{
    //O NOME DE UM VETOR É UM PONTEIRO CONSTANTE PARA UM ESPAÇO ALOCADO NA MEMÓRIA.
    int v[5];
    //PARA MOSTRAR O ESPAÇO NA MEMÓRIA QUE O PONTEIRO DA MAIN (FUNÇÃO) E DO V (VETOR) ESTÁ ALOCADO, É SÓ APRENSENTAR COM %P
    printf("Main: %p, V[]: %p\n", main, v);

    //UM PONTEIRO APONTA PARA UMA VARIÁVEL, PEGANDO O ENDEREÇO NA MEMORIA QUE A VARIÁVEL ESTÁ ALOCADA.
    //O PONTEIRO DEVE SER DO MESMO TIPO DA VARIÁVEL PARA QUE ELE APONTA
    //OS PONTEIROS SÃO DECLARADOS COM UM ASTERISCO ANTES.
    char *p;
    char ve = 'A';
    p = &ve;
    //P É O ENDEREÇO
    //*P É O VALOR QUE ESTÁ NA AQUELE ENDEREÇO
    printf("Endereco Armazenado no Ponteiro: %d\n", p);


    //MAIS EXEMPLOS
    int count = 60;
    int q;
    int *m;
    //M RECEBE O ENDEREÇO DE COUNT
    m = &count;
    //QUE RECEBE O VALOR DO ENDEREÕ QUE ESTÁ SALVO DENTRO DO PONTEIRO
    q = *m;
    //M = ENDEREÇO DE COUNT; *M = CONTEÚDO DE COUNT; Q = COUNTEÚDO DE COUNT;
    printf("COUNT = %d | M = %d | *M = %d | Q = %d\n",count, m, *m, q);


    //MUDAR O CONTEUDO DE UMA VARIAVEL ATRAVÉS DE UM PONTEIRO
    int idade = 25;
    int *pointer;
    pointer = &idade;
    printf("IDADE: %d ", idade);
    *pointer = 22;
    printf("| IDADE MUDADA ATRAVES DO PONTEIRO: %d\n", idade);


    //PARA UMA FUNÇÃO PODER ALTERAR O VALOR DE VARIÁVEIS DA MAIN, É NECESSÁRIO REALIZAR A PASSAGEM POR REFERÊNCIA E NÃO CÓPIA.
    int a = 20, b = 30;
    printf("VALOR DE A: %d  |  VALOR DE B: %d\n", a, b);
    permuta(&a,&b);
    printf("(PERMUTADO) VALOR DE A: %d  |  VALOR DE B: %d\n", a, b);

    return 0;
}

void permuta(int *p, int *q){
    int x = *p;
    *p = *q;
    *q = x;
}
