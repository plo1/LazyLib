#include "SinglelyLinkedList.h"

#include <stdlib.h>
#include <string.h>

#include "List.h"

struct SLL_Node {
  void *data;
  int size;
  SLL_Node *next;
};

struct SLL {
  SLL_Node *head;
  int len;
  ListVT opt;
};

SLL_Node *_sll_node_init(void *data_in, int size_in, SLL_Node *next) {
  if (data_in == NULL || size_in <= 0) return NULL;

  SLL_Node *new_node = malloc(sizeof(SLL_Node));
  void *new_data = malloc(size_in);
  if (new_node == NULL || new_data == NULL) return NULL;

  memcpy(new_data, data_in, size_in);
  new_node->data = new_data;
  new_node->size = size_in;
  new_node->next = next;

  return new_node;
}

void _sll_node_free(SLL_Node *node) {
  if (node == NULL) return;

  free(node->data);
  free(node);
  // NOTE: consider other params of node to 0 to prevent reading from stack dump
  // after free
}

SLL *sll_init() {
  SLL *new_lst = malloc(sizeof(SLL));
  if (new_lst == NULL) return NULL;

  new_lst->head = NULL;
  new_lst->len = 0;

  new_lst->opt.get = &_sll_get;
  new_lst->opt.insert = &_sll_insert;
  new_lst->opt.remove = &_sll_remove;
  new_lst->opt.size = &_sll_size;

  return new_lst;
}

void sll_free(SLL *lst) {
  SLL_Node *prev = NULL;
  SLL_Node *curr = lst->head;

  while (curr != NULL) {
    prev = curr;
    curr = curr->next;
    _sll_node_free(prev);
  }
}

int _sll_insert(void *self, int pos, void *data_in, int size_in) {
  SLL *lst = self;
  if (lst == NULL || pos < 0 || pos > lst->len) return 0;

  SLL_Node *new_node = _sll_node_init(data_in, size_in, NULL);
  if (new_node == NULL) return 0;

  int i = 0;
  SLL_Node *prev = NULL;
  SLL_Node *curr = lst->head;
  while (curr != NULL) {
    if (i == pos) {
      if (prev == NULL) {
        lst->head = new_node;
      } else {
        prev->next = new_node;
        new_node->next = curr;
      }
      lst->len += 1;
      return 1;
    }
    prev = curr;
    curr = curr->next;
    i++;
  }

  return 0;
}

void *_sll_get(void *self, int pos) {
  SLL *lst = self;
  if (lst == NULL || pos < 0 || pos > lst->len || lst->len == 0) return NULL;

  int i = 0;
  SLL_Node *curr = lst->head;
  while (curr != NULL) {
    if (i == pos) {
      return curr;
    }

    curr = curr->next;
    i++;
  }

  return NULL;
}

void _sll_remove(void *self, int pos) {
  SLL *lst = self;
  if (lst == NULL || pos < 0 || pos > lst->len || lst->len == 0) return;

  int i = 0;
  SLL_Node *prev = NULL;
  SLL_Node *curr = lst->head;
  while (curr != NULL) {
    if (i == pos) {
      if (prev == NULL) {
        _sll_node_free(curr);
        lst->head = NULL;
      } else {
        prev->next = curr->next;
        _sll_node_free(curr);
      }
      return;
    }

    prev = curr;
    curr = curr->next;
    i++;
  }
}

int _sll_size(void *self) {
  SLL *lst = self;
  return lst->len;
}