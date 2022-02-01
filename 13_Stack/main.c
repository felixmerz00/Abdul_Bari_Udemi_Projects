#include <stdio.h>
#include <stdlib.h>

struct Stack
{
    int size;
    int top;
    int *A;
};

struct Stack* create(struct Stack *s, int size);
void display(struct Stack *s);
void push(struct Stack *s, int x);
int peek(struct Stack *s, int pos);
int pop(struct Stack *s);
int stackTop(struct Stack *s);
int isEmpty(struct Stack *s);
int isFull(struct Stack *s);

int main()
{
    struct Stack *s;
    s = create(s, 5);
    push(s, 10);
    push(s, 20);
    push(s, 30);
    push(s, 40);
    display(s);

    printf("2tes element auf dem Stack: %d\n", peek(s, 2));
    printf("Pop: %d\n", pop(s));
    printf("Current top of the Stack: %d\n", stackTop(s));
    if(!isEmpty(s)){
        printf("The stack isn't empty.\n");
    }
    if(!isFull(s)){
        printf("The stack isn't full.\n");
    }


    return 0;
}

struct Stack* create(struct Stack *s, int size)
{
    s = (struct Stack*)malloc(sizeof(struct Stack));
    s->size = size;
    s->top = -1;
    s->A = (int*)malloc(size * sizeof(int));
    return s;
}

void display(struct Stack *s)
{
    for(int i = s->top; i >= 0; i--){
        printf("%d ", s->A[i]);
    }
    printf("\n");
}

