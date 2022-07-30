#include <stdio.h>
#include <stdlib.h>
void permuta(int *p, int *q);
//O NOME DA FUN��O � UM PONTEIRO CONSTANTE PARA UMA SEQU�NCIA DE C�DIGOS
int main()
{
    //O NOME DE UM VETOR � UM PONTEIRO CONSTANTE PARA UM ESPA�O ALOCADO NA MEM�RIA.
    int v[5];
    //PARA MOSTRAR O ESPA�O NA MEM�RIA QUE O PONTEIRO DA MAIN (FUN��O) E DO V (VETOR) EST� ALOCADO, � S� APRENSENTAR COM %P
    printf("Main: %p, V[]: %p\n", main, v);

    //UM PONTEIRO APONTA PARA UMA VARI�VEL, PEGANDO O ENDERE�O NA MEMORIA QUE A VARI�VEL EST� ALOCADA.
    //O PONTEIRO DEVE SER DO MESMO TIPO DA VARI�VEL PARA QUE ELE APONTA
    //OS PONTEIROS S�O DECLARADOS COM UM ASTERISCO ANTES.
    char *p;
    char ve = 'A';
    p = &ve;
    //P � O ENDERE�O
    //*P � O VALOR QUE EST� NA AQUELE ENDERE�O
    printf("Endereco Armazenado no Ponteiro: %d\n", p);


    //MAIS EXEMPLOS
    int count = 60;
    int q;
    int *m;
    //M RECEBE O ENDERE�O DE COUNT
    m = &count;
    //QUE RECEBE O VALOR DO ENDERE� QUE EST� SALVO DENTRO DO PONTEIRO
    q = *m;
    //M = ENDERE�O DE COUNT; *M = CONTE�DO DE COUNT; Q = COUNTE�DO DE COUNT;
    printf("COUNT = %d | M = %d | *M = %d | Q = %d\n",count, m, *m, q);


    //MUDAR O CONTEUDO DE UMA VARIAVEL ATRAV�S DE UM PONTEIRO
    int idade = 25;
    int *pointer;
    pointer = &idade;
    printf("IDADE: %d ", idade);
    *pointer = 22;
    printf("| IDADE MUDADA ATRAVES DO PONTEIRO: %d\n", idade);


    //PARA UMA FUN��O PODER ALTERAR O VALOR DE VARI�VEIS DA MAIN, � NECESS�RIO REALIZAR A PASSAGEM POR REFER�NCIA E N�O C�PIA.
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
