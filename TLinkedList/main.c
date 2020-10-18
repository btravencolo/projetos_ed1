#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "TLinkedList.h"

int main(){
  printf("Hello World");
  struct aluno a;

  strcpy(a.nome,"João");
  a.matricula = 123;
  a.n1 = a.n2 = a.n3 =0;

  TLinkedList *lista;

  lista = list_create();
  int ret;
  ret = list_insert_sorted(lista, a);
  
  return 0;
}

