#define TAM 100

//ESTRUTURA DE UM ELEMENTO UNITARIO
typedef struct {
    int key;
    char desc[50];
} ELEMENT;

//ESTRUTURA DE UMA FILA DE ELEMENTOS
typedef struct {
    ELEMENT elements[100];
    int length;
} ARRANGEMENT;

//INICIALIZAR UMA LISTA
void start(ARRANGEMENT *p);

//REINICIAR UMA LISTA
void restart(ARRANGEMENT *p);

//CONSULTAR TAMANHO DE UMA LISTA
int length(ARRANGEMENT *p);

//IMPRIMIR UMA LISTA DE ARRANJO
void print(ARRANGEMENT *p);

//INSERIR ELEMENTO EM UMA POSICAO DESEJADA NA LISTA
int insertByPosition(ARRANGEMENT *p, ELEMENT el, int pos);

//INSERIR UM ELEMENTO NO �LTIMO ELEMENTO
int insertLastPosition(ARRANGEMENT *p, ELEMENT el);

//REMOVER UM ELEMENTO PELO INDICE
int removeByIndex(ARRANGEMENT *p, int index);

//REMOVER UM ELEMENTO PELO VALOR DA KEY
int removeByKey(ARRANGEMENT *p, int key);

//BUSCA SEQUENCIAL, BUSCA UM ELEMENTO
int findSequential(ARRANGEMENT *p, int key);
