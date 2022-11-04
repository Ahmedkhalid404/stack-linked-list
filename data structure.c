#include <stdio.h>
#include <stdlib.h>
#include "data structure.h"

//create
void create(Stack *s)
{
    s->size = 0;
    s->SpNext = NULL;
}
//************************************************
//is empty
int isStackEmpty(Stack s)
{
    return s.size == 0;
}
//*************************************************
//is full
int isStackFull(Stack s)
{
    return 0;
}
//**************************************************
//size
int stackSize(Stack s)
{
    return s.size;
}
//***************************************************
//push
void push(Stack *s,type el)
{
    Node *newNode = (Node *) malloc( sizeof(Node) );
    newNode->el = el;
    newNode->pNext = s->SpNext;
    s->SpNext = newNode;
    s->size++;
}
//***************************************************
//pop
type pop(Stack *s)
{
    type item = s->SpNext->el;
    Node *oldNode = s->SpNext;
    s->SpNext = s->SpNext->pNext;
    free(oldNode);
    s->size--;
    return item;
}
//**************************************************
//traverse
void traverse(Stack *s, void (*pF)(type *el))
{
    int i=0;
    for(Node *q = s->SpNext;i<s->size;i++,q = q->pNext)
        (pF)( &q->el );
}




