#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int check_loop(struct Node *p)
{
    struct Node *p2;
    p2 = p;
    do{
        p2 = p2->next;
        if(p2){
            p2 = p2->next;
        }
        p = p->next;
    }while(p && p2 && p != p2);
    if(p == p2){
        printf("Linked list is a Loop.\n");
        return 1;
    }
    else{
        printf("Linked list is linear.\n");
        return 0;
    }
}
