#include "TStack.h"
#include <stdlib.h>
#include "..\TDLinkedList\TDLinkedList.h"

struct TStack
{
    TDLinkedList *data;
};


TStack *stack_create(){
    TStack *st;
    st = malloc(sizeof(TStack));
    if (st != NULL){
        st->data  = list_create();
        if (st->data == NULL){
            free(st);
            st = NULL;
        }
    }
    return st;
}

int stack_push(TStack *st, struct aluno al){
    if (st == NULL){
       return INVALID_NULL_POINTER; 
    } else
    {
        return list_push_front(st->data,al);
        // if (push_front(st->data,al) == OUT_OF_MEMORY) {
        //     return OUT_OF_MEMORY
        // } else{
        //     return SUCCESS;
        // }
    }
}

int stack_free(TStack *st){

}