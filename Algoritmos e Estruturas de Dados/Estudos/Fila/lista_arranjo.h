#define TAM 100

//ESTRUTURA DE UM ELEMENTO UNITARIO
typedef struct {
    int key;
    char desc[50];
} ELEMENT;

//ESTRUTURA DE UMA FILA DE ELEMENTOS
typedef struct {
    ELEMENT elements[TAM];
    int length;
} ARRANGEMENT;

typedef struct {
    ELEMENT *elements;
    int length;
    int max_size;
}LIST;

//INICIALIZAR UMA LISTA
void start(ARRANGEMENT *p);

//FUNÇÃO NECESSÁRIA PARA INICIAR UMA LISTA DINAMICA
void startList(LIST *p);

//DEMOSTAR LISTA DINAMICA
void deleteList(LIST *p);

//REINICIAR UMA LISTA
void restart(ARRANGEMENT *p);

//CONSULTAR TAMANHO DE UMA LISTA
int length(ARRANGEMENT *p);

//IMPRIMIR UMA LISTA DE ARRANJO
void print(ARRANGEMENT *p);

//MOSTRA TODOS OS ELEMENTOS DE UMA LISTA DINAMICA
void printListDinamic(LIST *p);

//INSERIR ELEMENTO EM UMA POSICAO DESEJADA NA LISTA
int insertByPosition(ARRANGEMENT *p, ELEMENT el, int pos);

//INSERIR UM ELEMENTO NO ÚLTIMO ELEMENTO
int insertLastPosition(ARRANGEMENT *p, ELEMENT el);

//INSERE UM ELEMENTO NA LISTA DINAMICA
int insertByPositionListDinamic(LIST *p, ELEMENT el, int pos);

//REMOVER UM ELEMENTO PELO INDICE
int removeByIndex(ARRANGEMENT *p, int index);

//REMOVER UM ELEMENTO PELO VALOR DA KEY
int removeByKey(ARRANGEMENT *p, int key);

//BUSCA SEQUENCIAL, BUSCA UM ELEMENTO
int findSequential(ARRANGEMENT *p, int key);

//AUMENTA A QUANTIDADE DE POSIÇÕES DE UM VETOR
void mallocList(LIST *p);
