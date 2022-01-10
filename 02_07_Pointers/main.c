#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 10; /*data variable*/
    int *pX = &x;   /*memory address variable*/
    printf("%d\n\n", *pX);

    int A[5] = {2, 4, 6, 8, 10};
    int *pA;
    pA = A;
    for (int i = 0; i<5; i++){
        printf("%d\n", pA[i]);
    }
    use_malloc();
    return 0;
}

void use_malloc()
{
    int *pA2;   /*create Array in heap*/
    pA2 = (int *)malloc(5*sizeof(int));

    pA2[0]=2;pA2[1]=4;pA2[2]=6;pA2[3]=8;pA2[4]=10;
    for(int i=0;i<5;i++){printf("%d\n", pA2[i]);}

    free(pA2);   /*delete allocated memory for the array*/
}
