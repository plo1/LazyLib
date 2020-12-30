#ifndef STACK_H
#define STACK_H

typedef struct StackVT {
    int* (*push)(void *self, void *data_in, int size_in);
    void* (*peek)(void *self);
    void* (*pop)(void *self);
} StackVT;

#endif