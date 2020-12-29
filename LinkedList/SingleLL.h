typedef struct SL_Node
{
    void *data;
    int len;
    SL_Node *next;
} SL_Node;

typedef struct SingleLL
{
    SL_Node *head;
    int len;
};
