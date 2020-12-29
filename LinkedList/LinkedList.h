#ifndef LIST_H
#define LIST_H

enum List_Type {Single, Double};
typedef struct LinkedList LinkedList;

LinkedList* new_linked_list(List_Type type);
int insert(LinkedList *list, int pos, void *data, int len_in);
void* get(LinkedList *list, int pos, int *len_out);
void remove(LinkedList *list, int pos);
int size(LinkedList *list);

#endif