#include "TDLinkedList.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct DLNode DLNode;

struct TDLinkedList {
  DLNode *begin;
  DLNode *end;
  int size;
};

struct DLNode {
  struct aluno data;
  DLNode *next;
  DLNode *prev;
};

TDLinkedList* list_create(){
  TDLinkedList *list;
  list = malloc(sizeof(TDLinkedList));
  if (list != NULL){
    list->begin = NULL;
    list->end = NULL;
    list->size = 0;
  }
  return list;
}

int list_push_front(TDLinkedList *li, struct aluno al){
  if (li == NULL){
    return INVALID_NULL_POINTER;    
  } else {
    DLNode *node;
    node = malloc(sizeof(DLNode));
    if (node == NULL){
      return OUT_OF_MEMORY;
    } else {
      node->data = al;
      node->prev = NULL;
      node->next = li->begin;
    }
    // testando se a lista está vazia
    if (li->begin == NULL){
      li->begin = node;
      li->end = node;
      li->size = 1;
    } else {
      li->begin->prev = node;
      li->begin = node;
      li->size = li->size + 1;
    }
    return SUCCESS;
  }
}
int list_print(TDLinkedList *li){
  DLNode *aux = li->begin;
  while(aux != NULL){
    printf("Matricula: %d\n", aux->data.matricula);
    printf("Nome: %s\n", aux->data.nome);
    printf("Notas: %.3f %.3f %.3f\n",aux->data.n1,aux->data.n2,aux->data.n3);
    printf("-------------------------------\n");
    aux = aux->next;
  }
  return SUCCESS;
}

int list_print_reverse(TDLinkedList *li){
  DLNode *aux = li->end;
  while(aux != NULL){
    printf("Matricula: %d\n", aux->data.matricula);
    printf("Nome: %s\n", aux->data.nome);
    printf("Notas: %.3f %.3f %.3f\n",aux->data.n1,aux->data.n2,aux->data.n3);
    printf("-------------------------------\n");
    aux = aux->prev;
  }
  return SUCCESS;
}

