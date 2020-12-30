#include "List.h"
#include "DoublelyLinkedList.h"

struct DLL_Node {
  void *data;
  int size;
  DLL_Node *next;
  DLL_Node *prev;
};

struct DLL {
  DLL_Node *head;
  DLL_Node *end;
  int len;
  ListVT ops;
};