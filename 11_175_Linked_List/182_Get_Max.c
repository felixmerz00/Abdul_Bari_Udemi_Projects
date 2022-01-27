#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int get_max(struct Node *p)
{
    int max = INT_MIN;
    while(p){
        if(p->data > max){
            max = p->data;
        }
        p = p->next;
    }
    return max;
}

int get_min(struct Node *p)
{
    int min = INT_MAX;
    while(p){
        if(p->data < min){
            min = p->data;
        }
        p = p->next;
    }
    return min;
}
