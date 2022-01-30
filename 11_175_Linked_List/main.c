#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} *head, *head2, *head3, *head4loop;

struct Node * create_linear_linked_list(int *A, int n);
void display_linear_linked_list(struct Node *p);
void recursive_display(struct Node* p);
int count_num_elements(struct Node *p);
int sum(struct Node *p);
int get_max(struct Node *p);
int get_min(struct Node *p);
int search(struct Node *p, int x);
void insert(int pos, struct Node *p, int x);
int delete_node(int pos, struct Node *p);
struct Node* reverse_Linked_List(struct Node *p);
void concatenate(struct Node *p1, struct Node *p2);
struct Node* merge(struct Node *p1, struct Node *p2);
struct Node* create_loop_linked_list(int *A, int n);
void display_looped_linked_list(struct Node *p);
int check_loop(struct Node *p);

int main()
{
    int A[5] = {10, 20, 30, 40, 50};
    head = create_linear_linked_list(A, 5);
    int B[5] = {60, 70, 80, 90, 100};
    head2 = create_linear_linked_list(B, 5);
    int C[5] = {5, 15, 25, 35, 105};
    head3 = create_linear_linked_list(C, 5);
    head4loop = create_loop_linked_list(A, 5);

    display_linear_linked_list(head);printf("\n");
    recursive_display(head); printf("\n");
    printf("Length: %d\n", count_num_elements(head));
    printf("Sum: %d\n", sum(head));
    printf("Max: %d\n", get_max(head));
    printf("Min: %d\n", get_min(head));
    search(head, 30);
    search(head, 31);
    insert(6, head, 60);
    insert(1, head, 9);
    display_linear_linked_list(head);
    printf("Data deleted: %d\n", delete_node(1, head));
    printf("Data deleted: %d\n", delete_node(6, head));
    display_linear_linked_list(head);
    head = reverse_Linked_List(head);
    display_linear_linked_list(head);
    head = reverse_Linked_List(head);
    concatenate(head, head2);
    display_linear_linked_list(head);
    head = merge(head, head3);
    display_linear_linked_list(head);

    printf("Looped Linked List: \n");
    display_looped_linked_list(head4loop);
    check_loop(head4loop);
    display_linear_linked_list(head);
    check_loop(head);

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
    printf("\n");
}

struct Node* create_loop_linked_list(int *A, int n)
{
    struct Node *first, *p;
    first = (struct Node*)malloc(sizeof(struct Node));
    first->data = A[0];
    p = first;
    for(int i = 1; i < n; i++){
        p->next = (struct Node*)malloc(sizeof(struct Node));
        p->next->data = A[i];
        p = p->next;
    }
    p->next = first;
    return first;
}

void display_looped_linked_list(struct Node *p)
{
    struct Node *first;
    first = p;
    printf("%d ", p->data);
    p = p->next;
    while(first != p){
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}
