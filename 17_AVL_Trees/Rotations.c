#include <stdio.h>
#include <stdlib.h>

struct Node
{
    struct Node *lchild;
    int data;
    struct Node *rchild;
    int height;
};

struct Node* ll_rotation(struct Node *root_subtree)
{
    struct Node *p, *pl;
    p = root_subtree;
    pl = root_subtree->lchild;
    p->lchild = pl->rchild;
    pl->rchild = p;
    return pl;
};

struct Node* lr_rotation(struct Node *root_subtree)
{
    struct Node *p, *pl, *plr;
    p = root_subtree;
    pl = root_subtree->lchild;
    plr = root_subtree->lchild->rchild;
    p->lchild = plr->rchild;
    pl->rchild = plr->lchild;
    plr->rchild = p;
    plr->lchild = pl;
    return plr;
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

struct Node* rl_rotation(struct Node *root_subtree)
{
    struct Node *p, *pr, *prl;
    p = root_subtree;
    pr = root_subtree->rchild;
    prl = root_subtree->rchild->lchild;
    p->rchild = prl->lchild;
    pr->lchild = prl->rchild;
    prl->lchild = p;
    prl->rchild = pr;
    return prl;
};


