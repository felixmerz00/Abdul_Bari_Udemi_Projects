#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node * create_linear_linked_list(int *A, int n);
void display_linear_linked_list(struct Node *p);


int main()
{
    int A[5] = {10, 20, 30, 40, 50};
    struct Node *head;
    head = create_linear_linked_list(A, 5);
    display_linear_linked_list(head);
    return 0;
}

/*Takes a pointer to an array with n elements and creates a linked list out of it.
The method returns a pointer pointing to the head node.*/
struct Node * create_linear_linked_list(int *A, int n)
{
    struct Node *first;
    struct Node *p;
    first = (struct Node*)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    p = first;
    for(int i = 1; i < n; i++){
        p->next = (struct Node*)malloc(sizeof(struct Node));
        p = p->next;
        p->data = A[i];
        p->next = NULL;
    }
    return first;
}

void display_linear_linked_list(struct Node *p)
{
    while(p){
        printf("%d ", p->data);
        p = p->next;
    }
}

void display_linear_linked_list_recursively(struct Node *p)
{

}
