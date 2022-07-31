#include <stdio.h>
#include <stdlib.h>

int main()
{
    //ADICAO DE PONTEIROS DENTRO DE UM VETOR
    static int v[5] = {17, 29, 36, 44, 51};
    //O NOME DO VETOR � UM PONTEIRO CONSTANTE APONTANDO PARA A PRIMEIRA POSI��O DO VETOR
    //AO COLOCARMOS *V ESTAMOS ACESSANDO O PRIMEIRO ENDERE�O DO VETOR V
    //AO SOMARMOS O I COM V, ESTAMOS ANDANDO DENTRO DO VETOR
    for(int i=0; i<5; i++)
        printf("V[%d]: %d\n", i, *(v+i));
    printf("\n");



    //DEVE SE TOMAR UM CUIDADO AO SOMAR PONTEIROS, POIS TEMOS QUE DISTINGUIR CASAS DE ENDERE�OS DE MEM�RIA
    //UMA CASA DENTRO DE UM VETOR, � ONDE INICIA E TERMINA UM ESPA�O PARA UMA VARI�VEL
    //ENDERE�O � UM ESPA�O PARA AMARZENAR UM PEDA�O DA VARI�VEL
    int teste = 10;
    char *t1 = (char *) &teste;
    int *t2 = &teste;
    float *t3 = (float *) &teste;
    double *t4 = (double *) &teste;
    printf("%p %p %p %p\n\n", t1+1, t2+1, t3+1, t4+1);
    //COMO PODE-SE VER, UM ESPA�O NA MEM�RIA � A SOMA DOS BYTES NECESS�RIOS PARA CABER UMA VARI�VEL E N�O O PR�XIMO ENDERE�O DA MEM�RIA
    char *a = (char *) 0x1000;
    int *b = (int *) 0x1000;
    float *c = (float *) 0x1000;
    double *d = (double *) 0x1000;
    printf("%p %p %p %p\n\n", a+1, b+1, c+1, d+1);





    return 0;
}
