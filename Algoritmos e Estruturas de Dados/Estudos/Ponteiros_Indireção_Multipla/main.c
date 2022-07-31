#include <stdio.h>
#include <stdlib.h>

//"A" = *S = *R = *Q = *P

int main()
{
    //VARIAVEL BASE
    char t = 'A';
    printf("CONTEUDO DE T: %c\n", t);
    printf("ENDERECO DE T: %x\n\n", &t);

    //"A" = *S
    char *s;
    s = &t;
    printf("CONTEUDO DE S: %c\n", *s);
    printf("ENDERECO SALVO EM S: %x\n", s);
    printf("ENDERECO DO PROPRIO S: %x\n\n", &s);

    char **r;
    r = &s;
    printf("CONTEUDO DE R: %c\n", **r);
    printf("ENDERECO SALVO EM R: %x\n", r);
    printf("ENDERECO DO PROPRIO R: %x\n\n", &r);

    char ***q;
    q = &r;
    printf("CONTEUDO DE Q: %c\n", ***q);
    printf("ENDERECO SALVO EM Q: %x\n", q);
    printf("ENDERECO DO PROPRIO Q: %x\n\n", &q);

    char ****p;
    p = &q;
    printf("CONTEUDO DE P: %c\n", ****p);
    printf("ENDERECO SALVO EM P: %x\n", p);
    printf("ENDERECO DO PROPRIO P: %x\n\n", &p);


    return 0;
}
