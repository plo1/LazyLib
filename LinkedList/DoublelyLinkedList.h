#ifndef DOUBLELY_LINKED_LIST_H
#define DOUBLELY_LINKED_LIST_H

typedef struct DLL_Node DLL_Node;
typedef struct DLL DLL;

DLL* dll_init();
void dll_free(DLL *lst);

DLL_Node* _dll_node_init(void *data_in, int size_in);
void _dll_node_free(DLL_Node *node);

int _dll_insert(void *self, int pos, void *data_in, int size_in);
void* _dll_get(void *self, int pos);
void _dll_remove(void *self, int pos);
int _dll_size(void *self);

#endif