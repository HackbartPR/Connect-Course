#include <stdio.h>
#include <stdlib.h>

int main()
{
    //ADICAO DE PONTEIROS DENTRO DE UM VETOR
    static int v[5] = {17, 29, 36, 44, 51};
    //O NOME DO VETOR É UM PONTEIRO CONSTANTE APONTANDO PARA A PRIMEIRA POSIÇÃO DO VETOR
    //AO COLOCARMOS *V ESTAMOS ACESSANDO O PRIMEIRO ENDEREÇO DO VETOR V
    //AO SOMARMOS O I COM V, ESTAMOS ANDANDO DENTRO DO VETOR
    for(int i=0; i<5; i++)
        printf("V[%d]: %d\n", i, *(v+i));
    printf("\n");



    //DEVE SE TOMAR UM CUIDADO AO SOMAR PONTEIROS, POIS TEMOS QUE DISTINGUIR CASAS DE ENDEREÇOS DE MEMÓRIA
    //UMA CASA DENTRO DE UM VETOR, É ONDE INICIA E TERMINA UM ESPAÇO PARA UMA VARIÁVEL
    //ENDEREÇO É UM ESPAÇO PARA AMARZENAR UM PEDAÇO DA VARIÁVEL
    int teste = 10;
    char *t1 = (char *) &teste;
    int *t2 = &teste;
    float *t3 = (float *) &teste;
    double *t4 = (double *) &teste;
    printf("%p %p %p %p\n\n", t1+1, t2+1, t3+1, t4+1);
    //COMO PODE-SE VER, UM ESPAÇO NA MEMÓRIA É A SOMA DOS BYTES NECESSÁRIOS PARA CABER UMA VARIÁVEL E NÃO O PRÓXIMO ENDEREÇO DA MEMÓRIA
    char *a = (char *) 0x1000;
    int *b = (int *) 0x1000;
    float *c = (float *) 0x1000;
    double *d = (double *) 0x1000;
    printf("%p %p %p %p\n\n", a+1, b+1, c+1, d+1);





    return 0;
}
