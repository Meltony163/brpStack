#include<stdio.h>
#include<stdlib.h>
#include"node.h"
void InitStack(Stack* ps)
{
    ps->top=NULL;
    return;
}
void push(Stack *ps,char num)
{
    node* temb=(node*)malloc(sizeof(node));
    if(temb==NULL)
    {
        printf("Cant push\n");
    }
    temb->data=num;
    temb->link=ps->top;
    ps->top=temb;
    return;
}
char pop(Stack *ps)
{
	char t;
    if(ps->top==NULL)
    {
        printf("Stack is Empty\n");
        return '0';
    }
	t=ps->top->data;
    node* temb=ps->top;
    ps->top=ps->top->link;
    free(temb);
    return t;
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
void TraversStack(Stack s)
{
    node* temb=s.top;
    while(temb!=NULL)
    {
        printf("%c\n",temb->data);
        temb=temb->link;
    }
}
