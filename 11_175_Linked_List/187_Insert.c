#include <stdio.h>
#include <stdlib.h>

extern struct Node *head;

struct Node
{
    int data;
    struct Node *next;
};

/*takes the position of the new node, the head of the linked list and the data of the new node*/
void insert(int pos, struct Node *p, int x)
{
    struct Node *t;
    t = (struct Node*)malloc(sizeof(struct Node));
    t->data = x;

    /*if the new node is the new head of the linked list*/
    if(pos == 1){
        t->next = p;
        head = t; /*head aus main methode müsste erreicht und bearbeitet werden*/
    }
    else{
        for(int i = 1; i < pos-1; i++){
            p = p->next;
        }
        t->next = p->next;
        p->next = t;
    }
}
