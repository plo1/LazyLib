#ifndef STACK_H
#define STACK_H
int push(void *data, int len_in);
void* peek(int *len_out);
void* pop(int *len_out);
#endif
