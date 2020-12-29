#ifndef SINGLELY_LINKED_LIST_H
#define SINGLELY_LINKED_LIST_H

typedef struct SLL_Node
{
    void *data;
    int len;
    SLL_Node *next;
} SLL_Node;

typedef struct SLL
{
    SLL_Node *head;
    int len;
} SLL;

SLL* alloc_SLL();
int insert(SLL *lst, int pos, void *data, int size_in);
void* get(SLL *lst, int pos, int *size_out);
void remove(int pos);
void dealloc_SSL(SLL *lst);
int size(SLL *lst);

#endif