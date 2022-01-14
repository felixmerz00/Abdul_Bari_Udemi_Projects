#include <stdio.h>
#include <stdlib.h>

int fun(int n)
{
    if(n>100){
        return n-10;
    }
    return fun(fun(n+11));
}

int main()
{
    fun(50);
    return 0;
}
