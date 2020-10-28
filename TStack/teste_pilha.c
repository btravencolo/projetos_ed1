#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "TStack.h"

int main(){
  printf("Hello World");

  struct aluno a,b,c;
  
  strcpy(a.nome,"João");
  a.matricula = 123;
  a.n1 = a.n2 = a.n3 =0;

 strcpy(b.nome,"Maria");
  b.matricula = 123;
  b.n1 = b.n2 = b.n3 =10;

  TStack *st;
  st = stack_create();
  if (stack_push(st, a)==OUT_OF_MEMORY){
      printf("Erro! falta de memória");
  }
  if (stack_push(st, b)==OUT_OF_MEMORY){
      printf("Erro! falta de memória");
  }

}