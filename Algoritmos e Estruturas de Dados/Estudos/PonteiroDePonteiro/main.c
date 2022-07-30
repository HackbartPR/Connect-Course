#include <stdio.h>
#include <stdlib.h>

//A = *P1 = *P2;

int main()
{
    //INICIALIZANDO A VARIAVEL
    int x = 10;
    printf("VALOR DE X: %d\n", x);
    printf("ENDERECO DE X: %x\n\n", &x); //%X PEGA O VALOR EM HEXADECIMAL

    int *p1;
    p1 = &x;
    printf("VALOR DE P1: %d\n", *p1);
    printf("ENDERECO SALVO EM P1 %x\n", p1);
    printf("ENDERECO PROPRIO DE P1: %x\n\n", &p1);

    int **p2;
    p2 = &p1;
    printf("VALOR DE P2: %d\n", **p2);
    printf("ENDERECO SALVO EM P2 %x\n", p2);
    printf("ENDERECO PROPRIO DE P2: %x\n\n", &p2);

    **p2 = 20;
    printf("ALTERANDO O **P2 PARA 20\n");
    printf("P2 = %d\n",**p2);
    printf("P1 = %d\n", *p1);
    printf("X = %d\n", x);

    return 0;
}
