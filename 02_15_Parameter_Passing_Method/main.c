#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y){
    int temp = *x;   /*dereferencing pointer x*/
    *x = *y;
    *y = temp;}

int main(){
    int x = 10; int y = 5;
    printf("x = %d, y = %d\n", x, y);
    swap(&x, &y);   /*pass memory addresses of variables*/
    printf("x = %d, y = %d\n", x, y);
    return 0;}
