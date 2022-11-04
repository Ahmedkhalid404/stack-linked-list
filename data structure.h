#ifndef STACK
#define STACK
typedef int type;
typedef struct node
{
    type el;
    struct node *pNext;
}Node;
typedef struct stack
{
    Node *SpNext;
    int size;
}Stack;
//**********************************************
void create(Stack *s);
//**********************************************
int isStackEmpty(Stack s);
//**********************************************
int isStackFull(Stack s);
//**********************************************
int stackSize(Stack s);
//**********************************************
void push(Stack *s,type el);
//**********************************************
type pop(Stack *s);
//**********************************************
void traverse(Stack *s,void(*pF)(type *el));
//**********************************************

#endif // STACK
