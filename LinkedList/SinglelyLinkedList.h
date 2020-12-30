#ifndef SINGLELY_LINKED_LIST_H
#define SINGLELY_LINKED_LIST_H

#include "List.h"

typedef struct SLL_Node {
  void *data;
  int size;
  SLL_Node *next;
} SLL_Node;

typedef struct SLL {
  SLL_Node *head;
  int len;
  ListVT ops;
} SLL;

SLL* sll_init();
void sll_free(SLL *lst);

SLL_Node* _sll_node_init(void *data_in, int size_in, SLL_Node *next);
void _sll_node_free(SLL_Node *node);

int _sll_insert(void *self, int pos, void *data_in, int size_in);
void* _sll_get(void *self, int pos, int *size_out);
void _sll_remove(int pos);
int _sll_size(void *self);

#endif