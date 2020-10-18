#include "TLinkedList.h"
#include <stdlib.h>


typedef struct list_node list_node;

// node definition
struct list_node {
    struct aluno data;
    list_node *next;
};

// list definition
struct TLinkedList {
    list_node *head;
};

// list_create - cria a lista, fazendo as alocações necessária
TLinkedList* list_create(){
    TLinkedList *list;
    list = malloc(sizeof(TLinkedList));
    if (list != NULL){
        list->head = NULL;
    }
    return list;
};

// list_free - libera toda a lista da memória
int list_free(TLinkedList *li){

}


int list_push_front(TLinkedList *li, struct aluno al){

}

int list_push_back(TLinkedList *li, struct aluno al){

}

int list_insert(TLinkedList *li, int pos, struct aluno al){

}

int list_insert_sorted(TLinkedList *li, struct aluno al){
  if (li == NULL){
    return INVALID_NULL_POINTER;
  } else {
    list_node *node;
    node = malloc(sizeof(list_node));
    if (node == NULL) {
      return OUT_OF_MEMORY;
    } else {
      node->data = al;
      // teste se a lista está vazia
      if (li->head == NULL){
        node->next = NULL;
        li->head = node;
      } else {
        // a lista possui pelo menos 1 elemento
        list_node *aux, *previous;
        aux = li->head;
        while (aux != NULL &&  aux->data.matricula < al.matricula ) {
          previous = aux;
          aux = aux->next;
        }
        // verificando se a inserção é no início da lista
        if (aux == li->head) {
          node->next = li->head;
          li->head = node;
        } else {
          // inserção em uma posição diferente do início da lista
          previous->next = node;
          node->next = aux;
        }
      }
      return SUCCESS;
    }
  }
}

int list_size(TLinkedList *li){

}


int list_pop_front(TLinkedList *li){

}

int list_pop_back(TLinkedList *li){

}

int list_erase(TLinkedList *li, int pos){

}

int list_find_pos(TLinkedList *li, int pos, struct aluno *al){

}

int list_find_mat(TLinkedList *li, int nmat, struct aluno *al){

}

int list_front(TLinkedList *li, struct aluno *al){

}

int list_back(TLinkedList *li, struct aluno *al){

}

int list_get_pos(TLinkedList *li, int nmat, int *pos){

}

int list_print(TLinkedList *li){

}

