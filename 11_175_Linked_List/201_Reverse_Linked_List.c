#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node* reverse_Linked_List(struct Node *p)
{
    struct Node *last, *advanced;
    last = p;
    p = p->next;
    advanced = p->next;
    last->next = NULL;
    while(p){
        p->next = last;
        last = p;
        p = advanced;
        if(advanced){
            advanced = advanced->next;
        }
    }
    return last;
}
