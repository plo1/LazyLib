#ifndef DOUBLELY_LINKED_LIST_H
#define DOUBLELY_LINKED_LIST_H

typedef struct DLL_Node
{
    void *data;
    int size;
    DLL_Node *next;
    DLL_Node *prev;
} DLL_Node;

typedef struct DLL
{
    DLL_Node *head;
    DLL_Node *end;
    int len;
} DLL;

DLL* DLL_alloc();
int DLL_insert(DLL *lst, int pos, void *data_in, int size_in);
void* DLL_get(DLL *lst, int pos, int *size_out);
void DLL_remove(int pos);
void DLL_dealloc(DLL *lst);
int DLL_size(DLL *lst);

#endif