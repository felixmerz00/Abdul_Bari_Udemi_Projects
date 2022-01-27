#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int search(struct Node *p, int x)
{
    while(p){
        if(p->data == x){
            printf("%d found!\n", x);
            return 1;
        }
        p = p->next;
    }
    printf("%d not found!\n", x);
    return 0;
}
