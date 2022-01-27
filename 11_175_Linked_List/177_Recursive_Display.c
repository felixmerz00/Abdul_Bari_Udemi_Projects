#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void recursive_display(struct Node *p)
{
    if(p){
        printf("%d ", p->data);
        p = p->next;
        recursive_display(p);
    }
}
