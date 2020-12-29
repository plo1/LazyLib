#include <stdlib.h>
#include "SinglelyLinkedList.h"

SLL* alloc_SLL() {
    SLL *new_lst = malloc(sizeof(SLL));
    new_lst->head = NULL;
    new_lst->len = 0;
    return new_lst;
}

int insert(SLL *lst, int pos, void *data, int size_in);
void* get(SLL *lst, int pos, int *size_out);
void remove(int pos);
void dealloc_SLL(SLL *lst);
int size(SLL *lst);