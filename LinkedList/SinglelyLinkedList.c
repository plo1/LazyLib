#include "SinglelyLinkedList.h"

#include <stdlib.h>

SLL* sll_init() {
  SLL* new_lst = malloc(sizeof(SLL));
  new_lst->head = NULL;
  new_lst->len = 0;
  // TODO:set the virtual table
  return new_lst;
}
