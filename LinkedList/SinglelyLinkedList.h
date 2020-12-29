#ifndef SINGLELY_LINKED_LIST_H
#define SINGLELY_LINKED_LIST_H

typedef struct SLL_Node {
  void *data;
  int size;
  SLL_Node *next;
} SLL_Node;

typedef struct SLL {
  SLL_Node *head;
  int len;
} SLL;

SLL *sll_alloc();
void sll_dealloc(SLL *lst);

SLL_Node *_sll_node_alloc(void *data_in, int size_in, SLL_Node *next);
void _sll_node_dealloc(SLL_Node *node);

int _sll_insert(void *self, int pos, void *data_in, int size_in);
void *_sll_get(void *self, int pos, int *size_out);
void _sll_remove(int pos);
int _sll_size(void *self);

#endif