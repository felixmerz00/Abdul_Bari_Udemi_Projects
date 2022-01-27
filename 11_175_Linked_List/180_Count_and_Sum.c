#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int count_num_elements(struct Node *p)
{
    int l = 0;
    while(p){
        l++;
        p = p->next;
    }
    return l;
}

int sum(struct Node *p)
{
    int sum = 0;
    while(p){
        sum += p->data;
        p = p->next;
    }
    return sum;
}
