#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //ESTRUTURA SIMPLES OU ANONIMA: ESTE TIPO DE DECLARAÇÃO, NÃO PERMITE CRIAR UMA OUTRA ESTRUTURA UTILIZANDO ESTA COMO TIPO. NÃO PE A FORMA MAIS ACONSELHÁVEL DE CRIAR.
    struct {
        int dia;
        int mes;
        int ano;
    } hoje;

    struct {
        int dia;
        int mes;
        int ano;
    } novoHoje;

    hoje.dia = 26;
    hoje.mes = 07;
    hoje.ano = 2022;

    printf("Simples: %d/%d/%d\n", hoje.dia, hoje.mes, hoje.ano);

    //ESTRUTURA ROTULADA: ESTE TIPO DE ESTRUTURA PERMITE CRIAR UMA OUTRA ESTRUTURA UTILIZANDO ELA COMO TIPO, MAS SERÁ NECESSÁRIO DEFINIR QUE A NOVA ESTRUTURA SERA UMA STRUCT
    typedef struct data {
        int dia;
        int mes;
        int ano;
    };

    struct data hoje_1;
    struct data amanha;

    hoje_1.dia = 26;
    hoje_1.mes = 07;
    hoje_1.ano = 2022;

    printf("Rotulada: %d/%d/%d\n", hoje_1.dia, hoje_1.mes, hoje_1.ano);

    //ESTRUTURA ROTULADA E NOMEADA: ESTE TIPO DE ESTRUTURA TE PERMITE CRIAR OUTRAS ATRAVÉS DELA SEM TER QUE UTILIZAR TODAS AS VEZES A PARALAVRA STRUCT AO CRIAR UMA NOVA
    typedef struct data_1 {
        int dia;
        int mes;
        int ano;
    } DATA;

    DATA hoje_2;
    DATA amanha_1;

    hoje_2.dia = 26;
    hoje_2.mes = 07;
    hoje_2.ano = 2022;

    printf("Rotulada e Nomeada: %d/%d/%d\n", hoje_2.dia, hoje_2.mes, hoje_2.ano);

    //OBSERVAÇÕES
    //ESTRUTURAS TAMBÉM PODEM SER DEFINIDAS COMO ESTÁTICAS, OU SEJA, UMA VEZ INICIALIZADA SEU VALOR PERMANECE O ÚLTIMO, MESMO EM ESCOPO LOCAL
    static DATA hoje_3 = {19,7,2022};

    //TAMBÉM É POSSÍVEL QUE UMA ESTRUTURA POSSUA OUTRA ESTRUTURA COMO CAMPO
    typedef struct pessoa {
        char nome[50];
        char fone[21];
        DATA nasc;
    } PESSOA;

    PESSOA usuario;
    strcpy(usuario.nome, "Carlos");
    strcpy(usuario.fone, "991524358");
    usuario.nasc.dia = 18;
    usuario.nasc.mes = 12;
    usuario.nasc.ano = 1996;

    printf("%s %s %d %d %d \n", usuario.nome,usuario.fone ,usuario.nasc.dia, usuario.nasc.mes, usuario.nasc.ano);

    PESSOA amigo = {"Fulano", "991524358", {18,12,1996}};
    printf("%s %s %d %d %d \n", amigo.nome, amigo.fone, amigo.nasc.dia, amigo.nasc.mes, amigo.nasc.ano);

    return 0;
}
