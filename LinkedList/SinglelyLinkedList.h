#ifndef SINGLELY_LINKED_LIST_H
#define SINGLELY_LINKED_LIST_H

typedef struct SLL_Node SLL_Node;
typedef struct SLL SLL;

SLL_Node* _sll_node_init(void *data_in, int size_in, SLL_Node *next);
void _sll_node_free(SLL_Node *node);

SLL* sll_init();
void sll_free(SLL *lst);

int _sll_insert(void *self, int pos, void *data_in, int size_in);
void* _sll_get(void *self, int pos);
void _sll_remove(void *self, int pos);
int _sll_size(void *self);

#endif