#ifndef St
#define St
#include"node.h"
void InitStack(Stack* ps);
char pop(Stack* ps);
void push(Stack* ps,char num);
int StackEmpty(Stack s);
void DestoryStack(Stack* ps);
void TraversStack(Stack s);
#endif