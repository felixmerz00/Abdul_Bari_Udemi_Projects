#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void concatenate(struct Node *p1, struct Node *p2)
{
    while(p1->next){
        p1 = p1->next;
    }
    p1->next = p2;
}

struct Node* merge(struct Node *p1, struct Node *p2)
{
    struct Node *t;
    struct Node *tHead;
    /*give the new list a head*/
    if(p1->data <= p2->data){
        t = p1;
        p1 = p1->next;
    }
    else{
        t = p2;
        p2 = p2->next;
    }
    tHead = t;

    /*add nodes in increasing order*/
    while(p1 && p2){
        if(p1->data <= p2->data){
            t->next = p1;
            p1 = p1->next;
        }
        else{
            t->next = p2;
            p2 = p2->next;
        }
        t = t->next;
    }

    /*at this point one of the lists is empty. add the last nodes to the end of the merged list*/
    if(p1){
        concatenate(t, p1);
    }
    else if(p2){
        concatenate(t, p2);
    }
    return tHead;
}
