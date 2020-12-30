#ifndef LIST_H
#define LIST_H

typedef struct ListVT {
  int (*insert)(void *self, int pos, void *data_in, int size_in);
  void* (*get)(void *self, int pos, int *size_out);
  void (*remove)(int pos);
  int (*size)(void *self);
} ListVT;

#endif