#include <stdio.h>
#include <stdlib.h>

extern struct Node *head;

struct Node
{
    int data;
    struct Node *next;
};

int delete_node(int pos, struct Node *p)
{
    struct Node *t;
    int x;
    if(pos == 1){
        t = p;
        head = p->next;
    }
    else{
        for(int i = 1; i < pos - 1; i++){
            p = p->next;
        }
        t = p->next;
        p->next = p->next->next;
    }
    x = t->data;
    free(t);
    return x;
}
