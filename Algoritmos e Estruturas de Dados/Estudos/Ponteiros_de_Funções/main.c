#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void abrir(void){puts("Abrindo...");}
void editar(void){puts("Editando...");}
void salvar(void){puts("Salvando...");}
void fechar(void){puts("Fechando...");}

int menor(int x, int y){return x<y;} //VERIFICA SE X � MENOR QUE Y, SE SIM: RETURNA 1
int maior(int x, int y){return x>y;} //VERIFICA SE X � MAIOR QUE Y, SE SIM: RETURNA 1
int minmax(int v[], int lenght, int (*func)(int, int)){ //RECEBE COMO PARAMETRO UM PONTEIRO DE UMA FUN��O
    int minMax = v[0];

    for(int i=1; i < lenght; i++){
        if(func(v[i], minMax))
            minMax = v[i];
    }

    return minMax;
}


//EMBORA O NOME DE UMA FUN��O J� SEJA UM PONTEIRO CONSTANTE ONDE APONTA PARA A FUN��O, EXISTE OUTRA FORMA DE CHAMAR UMA FUN��O, CRIANDO OUTRO PONTEIRO
int main()
{
    //PONTEIRO DE FUN��ES DEVEM CONTER A SINTAXE ABAIXO:
    double (*p)(double); //TIPO (*NOME)(TIPO PARAMS)
    p = sqrt;
    printf("Chamando SQRT atraves do *P: %.2lf\n\n", p(25)); //AGORA A FUN��O SQRT PODE SER CHAMADA UTILIZANDO O PONTEIRO P


    //UM USO T�PICO PARA PONTEIROS � UTILIZAR UM VETOR DE PONTEIROS DE FUN��ES E COLOC�-LOS EM UM MENU, POR EXEMPLO:
    static void (*functions[])(void) = {abrir, editar, salvar, fechar}; //RETORNO (*NOME [])(PARAMETROS) = {FUN��O 1, FUN��O 2...}
    int escolha;
    do{
        printf("0 - Abrir\n");
        printf("1 - Editar\n");
        printf("2 - Salvar\n");
        printf("3 - Fechar\n");
        printf("Opcao: ");
        scanf("%d", &escolha);

        if(escolha >= 0 && escolha <=3)
            functions[escolha](); //CHAMANDO AS FUN��ES SALVAS NO INDICE INDICADO

    }while(escolha != 3);
    printf("\n\n");


    //TALVEZ UMA DAS MAIORES VANTAGENS EM SE UTILIZAR PONTEIROS DE FUN��ES, SEJA PARA PASSAR UMA FUN��O COMO PARAMETRO DE OUTRA, SEGUE O EXEMPLO ABAIXO:
    int v[] = {16, 14, 03, 57, 30};
    printf("Maior Numero: %d\n", minmax(v, 5, maior));
    printf("Menor Numero: %d\n\n", minmax(v, 5, menor));


    return 0;
}
