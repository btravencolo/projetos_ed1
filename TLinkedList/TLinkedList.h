#define SUCCESS 0
#define INVALID_NULL_POINTER -1
#define OUT_OF_MEMORY -2
#define OUT_OF_RANGE -3
#define ELEM_NOT_FOUND -4


struct aluno{
    int matricula;
    char nome[30];
    float n1,n2,n3;
};

typedef struct TLinkedList TLinkedList;

TLinkedList* list_create();
int list_free(TLinkedList *li);

int list_push_front(TLinkedList *li, struct aluno al);
int list_push_back(TLinkedList *li, struct aluno al);
int list_insert(TLinkedList *li, int pos, struct aluno al);

int list_insert_sorted(TLinkedList *li, struct aluno al);

int list_size(TLinkedList *li);


int list_pop_front(TLinkedList *li);
int list_pop_back(TLinkedList *li);
int list_erase(TLinkedList *li, int pos);

int list_find_pos(TLinkedList *li, int pos, struct aluno *al);
int list_find_mat(TLinkedList *li, int nmat, struct aluno *al);
int list_front(TLinkedList *li, struct aluno *al);
int list_back(TLinkedList *li, struct aluno *al);
int list_get_pos(TLinkedList *li, int nmat, int *pos);

int list_print(TLinkedList *li);
