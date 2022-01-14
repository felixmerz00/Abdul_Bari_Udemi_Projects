#include <stdio.h>
#include <stdlib.h>

void fun(int n)
{

    if(n>0){
        printf("%d ",n);
        fun(n-1);
    }
}

int fun2(int n){
    static int x=0;
    if(n>0){
        x++;
        return fun2(n-1)+x;
    }
    return 0;}

int main(){
    int x=5;
    printf("%d\n", fun2(x));    /*--> 25*/
    printf("%d\n", fun2(x));    /*--> 50*/
    return 0;}
