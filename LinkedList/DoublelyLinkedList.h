#ifndef DOUBLELY_LINKED_LIST_H
#define DOUBLELY_LINKED_LIST_H

#include "List.h"

typedef struct DLL_Node {
  void *data;
  int size;
  DLL_Node *next;
  DLL_Node *prev;
} DLL_Node;

typedef struct DLL {
  DLL_Node *head;
  DLL_Node *end;
  int len;
  ListVT ops;
} DLL;

DLL *dll_init();
void dll_free(DLL *lst);

DLL_Node *_dll_node_init(void *data_in, int size_in);
void _dll_node_free(DLL_Node *node);

int _dll_insert(DLL *lst, int pos, void *data_in, int size_in);
void *_dll_get(DLL *lst, int pos, int *size_out);
void _dll_remove(int pos);
int _dll_size(DLL *lst);

#endif