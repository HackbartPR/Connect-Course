#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} DATA;

void preencherDatas (DATA datas[], int TAM);
void imprimirDatas (DATA datas[], int TAM);
void ordenarPorAno (DATA datas[], int TAM);
int ordenarPorMes (DATA data, DATA menor);
int ordenarPorDia (DATA data, DATA menor);

int main(){
    int TAM = 0;
    printf("DIGITE A QUANTIDADE DE DATAS A SEREM INSERIDAS: ");
    scanf("%d", &TAM);

    DATA datas[TAM];

    //REALIZA A LEITURA DOS DADOS
    preencherDatas(datas, TAM);

    //REALIZAR A ORDENACAO DAS DATAS
    ordenarPorAno(datas, TAM);

    //MOSTRA OS DADOS CADASTRADOS
    printf("DATAS ORDENADAS: \n");
    imprimirDatas(datas, TAM);

    return 0;
}

void preencherDatas (DATA datas[], int TAM){
    for(int i = 0; i < TAM; i++){
        printf("%d%c - DIGITE O DIA: ", i+1, 167);
        scanf("%d", &datas[i].dia);

        printf("%d%c - DIGITE O MES: ", i+1, 167);
        scanf("%d", &datas[i].mes);

        printf("%d%c - DIGITE O ANO: ", i+1, 167);
        scanf("%d", &datas[i].ano);

        printf("\n");
    }
}

void imprimirDatas (DATA datas[], int TAM){
    for(int i = 0; i < TAM; i++){
        printf("%d%c:  ", i+1, 167);
        printf("%d / %d / %d ", datas[i].dia, datas[i].mes, datas[i].ano);
        printf("\n");
    }
}

void ordenarPorAno (DATA datas[], int TAM){
    int index = 1;

    while(index < TAM){
        DATA menor = datas[index-1];
        int posicao = index-1;

        for(int i = index; i < TAM; i++){
            //VERIFICA SE O DIA É MENOR
            if(datas[i].ano < menor.ano){
                menor = datas[i];
                posicao = i;
            }
            //VERIFICA SE O DIA É IGUAL
            else if(datas[i].ano == menor.ano){
                //VERIFICA SE O MES É MENOR
                if(ordenarPorMes(datas[i], menor) == -1){
                    menor = datas[i];
                    posicao = i;
                }
                //VERIFICA SE O MES É IGUAL
                else if(ordenarPorMes(datas[i], menor) == 0){
                    //VERIFICA SE O ANO É MENOR
                    if(ordenarPorDia(datas[i], menor) == -1){
                        menor = datas[i];
                        posicao = i;
                    }
                }
            }
        }

        DATA aux = datas[index-1];
        datas[index-1] = datas[posicao];
        datas[posicao] = aux;

        index++;
    }
}

int ordenarPorMes (DATA data, DATA menor){
    if(data.mes < menor.mes) return -1;
    else if (data.mes > menor.mes) return 1;
    else return 0;
}

int ordenarPorDia (DATA data, DATA menor){
    if(data.dia < menor.dia) return -1;
    else if (data.dia > menor.dia) return 1;
    else return 0;
}
