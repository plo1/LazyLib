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

DLL* alloc_DLL();
int insert(DLL *lst, int pos, void *data, int size_in);
void* get(DLL *lst, int pos, int *size_out);
void remove(int pos);
void dealloc_DLL(DLL *lst);
int size(DLL *lst);

#endif