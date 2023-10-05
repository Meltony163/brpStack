#include"../st/LinkedListStack.h"
#include"../st/node.h"
#include<stdio.h>
#include<stdlib.h>
int fun(char *str)
{
    char temb;
    int i=0;
    Stack st;
    InitStack(&st);
    while(str[i]!='\0')
    {
        if((str[i]=='(')||(str[i]=='{')||(str[i]=='['))
        {
                push(&st,str[i]);
        }
        else if((str[i]==')')||(str[i]=='}')||(str[i]==']'))
        {
            temb=pop(&st);
            if(temb=='0')
            {
                return 0;
            }
            else if((temb=='(')&&(str[i]!=')'))
            {
                return 0;
            }
            else if((temb=='{')&&(str[i]!='}'))
            {
                return 0;
            }
            else if((temb=='[')&&(str[i]!=']'))
            {
                return 0;
            }
        }
        i++;
    }
    if(StackEmpty(st))
    {
        return 1;
    }
    return 0;
}
