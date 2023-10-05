#ifndef NODE
#define NODE
typedef struct stacknode
{
    char data;
    struct stacknode* link;
}
node;

typedef struct stack
{
struct stacknode* top;
}
Stack;
#endif