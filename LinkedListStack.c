#include<stdio.h>
#include<stdlib.h>
typedef struct stacknode{
    int data;
    struct stacknode* link;
}node;
typedef  struct stack{
node* top;
}Stack;
int First(Stack s)
{
    if(s.top==NULL)
    {
        printf("Stack is Empty\n");
        return 0;
    }
    return s.top->data;
}
int StackEmpty(Stack s)
{
    if(s.top==NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void CopyStack(Stack* pf,Stack* ps)
{
    if(StackEmpty(*pf))
    {
        ps->top=NULL;
        return;
    }
    node* first,*second,*temb;
    first=(node*)malloc(sizeof(node));
    first->data=pf->top->data;
    ps->top=first;
    first->link=NULL;
    temb=pf->top->link;
    while(temb!=NULL)
    {
        second=(node*)malloc(sizeof(node));
        second->link=NULL;
        second->data=temb->data;
        first->link=second;
        first=first->link;
        temb=temb->link;
    }
}
int SizeOfStack(Stack s)
{
    int c=0;
    node* temb=s.top;
    while(temb!=NULL)
    {
        c++;
        temb=temb->link;
    }
    return c;
}
void DestoryStack(Stack *ps)
{
    node* temb;
    while(ps->top!=NULL)
    {
        temb=ps->top;
        ps->top=ps->top->link;
        free(temb);
    }
}
