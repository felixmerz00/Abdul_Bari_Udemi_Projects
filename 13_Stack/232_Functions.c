#include <stdio.h>
#include <stdlib.h>

struct Stack
{
    int size;
    int top;
    int *A;
};

void push(struct Stack *s, int x)
{
    if(s->top + 1 == s->size){
        printf("The stack is full.\n");
        return -1;
    }
    s->top++;
    s->A[s->top] = x;
    s->size++;
    printf("%d added to the stack\n", x);
}

int pop(struct Stack *s)
{
    if(s->top < 0){
        printf("The stack is empty.\n");
        return -1;
    }
    int x = s->A[s->top];
    s->top--;
    return x;
}

int peek(struct Stack *s, int pos)
{
    if(pos < 1 || pos > s->top + 1){
        return -1;
    }
    int i = s->top + 1 - pos;
    return s->A[i];
}

int stackTop(struct Stack *s)
{
    if(s->top == -1){
        printf("The stack is empty.\n");
        return -1;
    }
    return s->A[s->top];
}

int isEmpty(struct Stack *s)
{
    if(s->top == -1){
        return 1;
    }
    return 0;
}

int isFull(struct Stack *s)
{
    if(s->top + 1 == s->size){
        return 1;
    }
    return 0;
}
