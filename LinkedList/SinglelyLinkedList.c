#include <stdlib.h>
#include "SinglelyLinkedList.h"

SLL* sll_alloc() {
    SLL *new_lst = malloc(sizeof(SLL));
    new_lst->head = NULL;
    new_lst->len = 0;
    return new_lst;
}