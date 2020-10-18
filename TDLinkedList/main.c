#include <stdio.h>
#include "TDLinkedList.h"
#include <string.h>

int main(void) {
  printf("Hello World\n");
  
  struct aluno a,b;

  strcpy(a.nome,"João");
  a.matricula = 123;
  a.n1 = a.n2 = a.n3 =0;

 strcpy(b.nome,"Maria");
  b.matricula = 123;
  b.n1 = b.n2 = b.n3 =10;

  TDLinkedList *lista;
  lista = list_create();
  if (lista == NULL){
    printf("ERRO: memória insuficiente");
  } else{
    list_push_front(lista, a);
    list_push_front(lista, b);
    list_print(lista);
    printf("\n==========\n");
    list_print_reverse(lista);

  }
  return 0;
}