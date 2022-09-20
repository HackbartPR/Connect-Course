typedef struct NO {
    int value;
    NO *next;
} NO;

typedef struct LIST{
    NO *first;
    int length;
}LIST;

void startList(LIST *l);

void insertList(LIST *l, int num)
