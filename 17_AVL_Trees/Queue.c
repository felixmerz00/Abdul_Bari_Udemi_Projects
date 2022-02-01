#include <stdio.h>
#include <stdlib.h>

struct Node
{
    struct Node *lchild;
    int data;
    struct Node *rchild;
    int height;
};

struct Queue_Node
{
    struct Node *tree_Node;
    struct Queue_Node *next;
};

extern struct Queue_Node *head;

/*takes the head of the queue and the tree node to be enqueued
enqueues the tree node
returns the head of the queue*/
void enqueue(struct Node *tree_node)
{
    struct Queue_Node *p;
    p = head;
    if(!p){
        p = (struct Queue_Node*)malloc(sizeof(struct Queue_Node));
        p->tree_Node = tree_node;
        p->next = NULL;
    }
    else{
        while(!p->next){
            p = p->next;
        }
        p->next = (struct Queue_Node*)malloc(sizeof(struct Queue_Node));
        p->next->tree_Node = tree_node;
        p->next->next = NULL;
    }
};

/*takes head of queue
removes head from queue and sets the second element as the new head
returns the data from the removed head from the queue*/
struct Node* dequeue()
{
    struct Queue_Node *t;
    struct Node *pOut;
    pOut = head->tree_Node;
    t = head;
    head = head->next;
    free(t);
    return pOut;
};
