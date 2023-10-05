#include<stdio.h>
#include<stdlib.h>
#include"st/LinkedListStack.h"
#include"st/node.h"
#include"Logic/Logic.h"
#include<string.h>
int main()
{
    char *str=(char*)malloc(50*sizeof(char));
	fgets(str,49,stdin);
	str=(char*)realloc(str,strlen(str)+1);
	if(fun(str))
    {
        printf("balanced parentheses\n");
    }
    else
    {
        printf("not balanced parentheses\n");
    }
}
