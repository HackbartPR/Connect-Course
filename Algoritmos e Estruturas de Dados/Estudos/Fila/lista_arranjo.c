#include "lista_arranjo.h"
#include <stdio.h>

//FUNÇÃO NECESSÁRIA PARA INICIAR UMA LISTA
void start(ARRANGEMENT *p){
    p->length = 0;
}

//FUNÇÃO NECESSÁRIA PARA INICIAR UMA LISTA DINAMICA
void startList(LIST *p){
    int maxSize = 2;

    p->elements = malloc(maxSize * sizeof(ELEMENT));
    p->max_size = maxSize;

    p->length = 0;
}

//DEMOSTAR LISTA DINAMICA
void deleteList(LIST *p){
    free(p->elements);
}

//REINICIAR LISTA
void restart(ARRANGEMENT *p){
    p->length = 0;
}

//RECUPERA O TAMANHO DA LISTA
int length(ARRANGEMENT *p){
    return p->length;
}

//MOSTRA TODOS OS ELEMENTOS DE UMA LISTA
void print(ARRANGEMENT *p){
    for(int i=0; i < p->length; i++){
        printf("Index: %d\n", i);
        printf("Key: %d\n", p->elements[i].key);
        printf("Description: %s\n\n", p->elements[i].desc);
    }
}

//MOSTRA TODOS OS ELEMENTOS DE UMA LISTA DINAMICA
void printListDinamic(LIST *p){
    for(int i=0; i < p->length; i++){
        printf("Index: %d\n", i);
        printf("Key: %d\n", p->elements[i].key);
        printf("Description: %s\n\n", p->elements[i].desc);
    }
}


//INSERE UM ELEMENTO NA LISTA
int insertByPosition(ARRANGEMENT *p, ELEMENT el, int pos){

    if(p->length == TAM || pos > p->length) return 0;

    for(int i = p->length; i > pos; i--)
        p->elements[i] = p->elements[i-1];

    p->elements[pos] = el;
    p->length++;

    return 1;
}

//INSERE UM ELEMENTO NA LISTA DINAMICA
int insertByPositionListDinamic(LIST *p, ELEMENT el, int pos){

    if(p->length == p->max_size || pos > p->length) return 0;

    for(int i = p->length; i > pos; i--)
        p->elements[i] = p->elements[i-1];

    p->elements[pos] = el;
    p->length++;

    return 1;
}

//INSERE UM ELEMENTO NA ULTIMA POSICAO DE UMA LISTA
int insertLastPosition(ARRANGEMENT *p, ELEMENT el){
    if(p->length == TAM) return 0;

    p->elements[p->length] = el;
    p->length++;

    return 1;
}

//REMOVE UM ELEMENTO PELO INDEX INFORMADO
int removeByIndex(ARRANGEMENT *p, int index){
    if(index < 0 || index >= p->length) return 0;

    for(int i = index; i < (p->length -1); i++)
        p->elements[i] = p->elements[i+1];

    p->length--;

    return 1;
}

//REMOVE UM ELEMENTO PELO KEY INFORMADO
int removeByKey(ARRANGEMENT *p, int key){
    int index = 0;
    for(int i = 0; i < p->length; i++)
        if(p->elements[i].key == key) index = i;

    if(index == 0) return 0;

    for(int i = index; i < (p->length -1); i++)
        p->elements[i] = p->elements[i+1];

    p->length--;

    return 1;
}

//BUSCA UM ELEMENTO SEQUENCIALMENTE
int findSequential(ARRANGEMENT *p, int key){
    int index = -1;

    for(int i = 0; i < p->length; i++){
        if(p->elements[i].key == key) index = i;
    }

    return index;
}

//AUMENTA A QUANTIDADE DE POSIÇÕES DE UM VETOR
void mallocList(LIST *p){
    int newSize = p->max_size * 2;

    ELEMENT *newP = malloc(newSize * sizeof(ELEMENT));

    for(int i = 0; i < p->length; i++)
        newP[i] = p->elements[i];

    p->max_size = newSize;
    free(p->elements);

    p->elements = newP;
}
