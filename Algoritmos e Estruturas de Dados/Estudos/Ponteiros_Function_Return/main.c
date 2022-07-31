#include <stdio.h>
#include <stdlib.h>

char *dia_semana(int dia);

//PARA TER UMA FUN��O RETORNANDO UMA STRING, DEVE-SE UTILIZAR PONTEIRO
int main()
{
    //UM VETOR PARA RECEBER A STRING
    char *p;
    //P RECEBE A ESTRING DO DIA DA SEMANA
    p = dia_semana(2);
    //MOSNTRANDO O VALOR
    printf("Dia: %s\n", p);

    return 0;
}

//NESTE CASO O PONTEIRO N�O ARMAZENAR� O ENDERE�O DE MEM�RIA DO VETOR, MAS SIM SEU VALOR
char *dia_semana(int dia){
    //VETOR DE PONTEIROS DO TIPO CHAR
    //STATIC � UTILIZADO, POIS ESTAMOS TRABALHANDO COM VETORES COM TAMANHOS FIXOS
    static char *v[] = {"Erro", "Domingo", "Segunda", "Ter�a", "Quarta", "Quinta", "Sexta", "Sabado"};
    //RETORNA O CONTE�DO CONTIDA NA CASA CORRESPONDENTE DO VETOR
    return v[dia >=1 && dia <=7 ? dia : 0];
}
