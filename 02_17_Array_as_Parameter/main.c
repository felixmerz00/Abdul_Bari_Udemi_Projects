#include <stdio.h>
#include <stdlib.h>

/*Array as parameter*/
void fun(int A[], int size){
    for(int i=0;i<size;i++){
        printf("%d ", A[i]);
    }}

/*Returning an array*/
int * fun2(int size){
    int * P;
    P=(int *)malloc(size*sizeof(int));
    P[0]=2;P[1]=4;
    return P;}

int main(){
    int A[5] = {2,4,6,8,10};
    fun(A,5);
    int *B;
    B = fun2(5);
    printf("%d", B[0]); /*--> 2*/
    return 0;}
