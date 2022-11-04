#include <stdio.h>
#include <stdlib.h>
#include "data structure.h"
void print(type *el);
void inc(type *el);
int main()
{
    Stack s;
    create(&s);
    for(int i=1;i<=10;i++)
    {
        push(&s,i);
    }
    traverse(&s,&print);
    //traverse(&s,&inc);
    traverse(&s,&print);
    return 0;
}
void print(int *el)
{
    printf("%d\n",(*el));
}
void inc(int *el)
{
    (*el)++;
}
