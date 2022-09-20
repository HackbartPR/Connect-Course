//INICILIZAR UMA LISTA
void startList(LIST *l){
    l->first = NULL;
    l->length = 0;
}

//INSERE UM ELEMENT NA ÚLTIMA POSICAO DO ARRAY
void insertList(LIST *l, int num){
    NO *n = malloc(sizeof(NO));

    n->value = num;
    n->next = NULL;

    if(l->length == 0){
        l->next = &n;
        l->length++;
        return 0;
    }

    NO *aux = l->first;

    while(aux->next != NULL){
        printf("%d ", aux.value);
        aux = aux->next;
    }




}
