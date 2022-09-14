#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lista_arranjo.h"

#define TAM 100

int main(){
    //ARRANGEMENT fila;
    LIST list;

    ELEMENT elemento_01;
    elemento_01.key = 1;
    strcpy(elemento_01.desc, "Carlos");

    ELEMENT elemento_02;
    elemento_02.key = 2;
    strcpy(elemento_02.desc, "Bruno");

    startList(&list);

    int isSaved = insertByPositionListDinamic(&list, elemento_01, 0);
    if(!isSaved){
        printf("ERRO AO INSERIR USUARIO\n");
        return 0;
    }

    isSaved = insertByPositionListDinamic(&list, elemento_02, 1);
    if(!isSaved){
        printf("ERRO AO INSERIR USUARIO\n");
        return 0;
    }

    printListDinamic(&list);

    mallocList(&list);

    printf("***************************\n");

    ELEMENT elemento_03;
    elemento_03.key = 3;
    strcpy(elemento_03.desc, "Andre");

    ELEMENT elemento_04;
    elemento_04.key = 4;
    strcpy(elemento_04.desc, "Will");

    isSaved = insertByPositionListDinamic(&list, elemento_03, 2);
    if(!isSaved){
        printf("ERRO AO INSERIR USUARIO\n");
        return 0;
    }

    isSaved = insertByPositionListDinamic(&list, elemento_04, 3);
    if(!isSaved){
        printf("ERRO AO INSERIR USUARIO\n");
        return 0;
    }

    printListDinamic(&list);

    deleteList(&list);



    /*
    start(&fila);

    if(!insertByPosition(&fila, elemento_01, 0)){
        printf("Posicao Invalida ou Fila Lotada\n");
        return 0;
    }

    if(!insertByPosition(&fila, elemento_02, 1)){
        printf("Posicao Invalida ou Fila Lotada\n");
        return 0;
    }

    print(&fila);
    printf("Quantidade: %d\n", length(&fila));
    printf("******************\n");

    elemento_01.key = 50;
    if(!insertLastPosition(&fila, elemento_01)){
        printf("Fila Lotada\n");
        //return 0;
    }

    print(&fila);
    printf("%d\n", length(&fila));
    printf("******************\n");

    if(!removeByIndex(&fila, 1)){
        printf("Posicao Invalida\n");
        return 0;
    }


    print(&fila);
    printf("Quantidade: %d\n", length(&fila));
    printf("******************\n");

    if(!removeByIndex(&fila, 1)){
        printf("Key Invalida\n");
        return 0;
    }

    print(&fila);
    printf("Quantidade: %d\n", length(&fila));
    printf("******************\n");

    int index = findSequential(&fila, 1);
    if(index == -1){
        printf("Key não encontrada");
        return 0;
    }

    printf("Find Sequential\n");
    printf("Key 1:\n");
    printf("Index: %d\n", index);
    printf("******************\n");

    */

    return 0;
}




