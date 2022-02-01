#include <stdio.h>
#include <stdlib.h>

struct Node
{
    struct Node *lchild;
    int data;
    struct Node *rchild;
    int height;
};

struct Node* rr_rotation(struct Node *root_subtree)
{
    struct Node *p, *pr;
    p = root_subtree;
    pr = root_subtree->rchild;
    p->rchild = pr->lchild;
    pr->lchild = p;
    return pr;
};
