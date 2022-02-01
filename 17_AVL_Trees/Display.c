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
}*head;

void enqueue(struct Node *tree_node);
struct Node* dequeue();

void display_preorder(struct Node *root)
{
    if(root){
        printf("%d ", root->data);
        display_preorder(root->lchild);
        display_preorder(root->rchild);
    }
}

void display_inorder(struct Node *root)
{
    if(root){
        display_inorder(root->lchild);
        printf("%d ", root->data);
        display_inorder(root->rchild);
    }
}

void display_postorder(struct Node *root)
{
    if(root){
        display_postorder(root->lchild);
        display_postorder(root->rchild);
        printf("%d ", root->data);
    }
}

void display_by_level(struct Node *root)
{
    struct Queue_Node *first, *second;
    struct Node *p;
    first = (struct Queue_Node*)malloc(sizeof(struct Queue_Node));
    second = (struct Queue_Node*)malloc(sizeof(struct Queue_Node));
    first->tree_Node = root->lchild;
    first->next = second;
    second->tree_Node = root->rchild;
    second->next = NULL;
    head = first;

    printf("%d ", root->data);
    while(head){
        p = dequeue();
        printf("%d ", p->data);
        if(p->lchild){
            enqueue(p->lchild);
        }
        if(p->rchild){
            enqueue(p->rchild);
        }
    }
}
