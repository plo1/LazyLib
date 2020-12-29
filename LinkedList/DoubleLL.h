typedef struct DL_Node
{
    void *data;
    int size;
    DL_Node *next;
    DL_Node *prev;
} DL_Node;

typedef struct DoubleLL
{
    DL_Node *head;
    DL_Node *end;
    int len;
} DoubleLL;
