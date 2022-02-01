#include <stdio.h>
#include <stdlib.h>

struct Node
{
    struct Node *lchild;
    int data;
    struct Node *rchild;
    int height;
};

struct Node * Rinsert(struct Node *root, int data);
void display_preorder(struct Node *root);
void display_inorder(struct Node *root);
void display_postorder(struct Node *root);
void display_by_level(struct Node *root);
int get_height(struct Node *node);
int get_balance_factor(struct Node *root_subtree);
struct Node* rr_rotation(struct Node *root_subtree);

int main()
{
    struct Node *root;
    root = NULL;
    root = Rinsert(root, 20);
    root = Rinsert(root, 30);
    root = Rinsert(root, 40);
    root = Rinsert(root, 50);
    root = Rinsert(root, 60);

    display_inorder(root);
    printf("\n");
    display_by_level(root);
    printf("\n");

    return 0;
}

/*takes root node of a subtree where a node with data should be added
returns the root node of the subtree*/
struct Node * Rinsert(struct Node *root, int data)
{
    struct Node *p = root;
    /*if the (sub-)tree doesn't exist yet, create a new tree.*/
    if(!p){
        p = (struct Node*)malloc(sizeof(struct Node));
        p->data = data;
        p->lchild = NULL; p->rchild = NULL;
        p->height = 0;
    }
    if(data < p->data){
        p->lchild = Rinsert(p->lchild, data);
    }
    else if(data > p->data){
        p->rchild = Rinsert(p->rchild, data);
    }
    p->height = get_height(p);

    if(get_balance_factor(p) == 2 && get_balance_factor(p->lchild) == 1){
        printf("LL-rotation needs to be done at %d\n", p->data);
    }
    else if(get_balance_factor(p) == 2 && get_balance_factor(p->lchild) == -1){
        printf("LR-rotation needs to be done at %d\n", p->data);
    }
    else if(get_balance_factor(p) == -2 && get_balance_factor(p->rchild) == -1){
        printf("RR-rotation needs to be done at %d\n", p->data);
        return rr_rotation(p);
    }
    else if(get_balance_factor(p) == -2 && get_balance_factor(p->rchild) == 1){
        printf("RL-rotation needs to be done at %d\n", p->data);
    }
    return p;
}

int get_height(struct Node *node)
{
    int lh, rh;
    lh = node && node->lchild? node->lchild->height: 0;
    rh = node && node->rchild? node->rchild->height: 0;
    return lh > rh? lh + 1: rh + 1;
}

int get_balance_factor(struct Node *root_subtree)
{
    int lh, rh;
    lh = root_subtree->lchild ? root_subtree->lchild->height: 0;
    rh = root_subtree->rchild ? root_subtree->rchild->height: 0;
    return lh-rh;
}



