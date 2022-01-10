#include <stdio.h>
#include <stdlib.h>
struct Rectangle
{
    int length;
    int width;
};

int main()
{
    struct Rectangle r = {10, 5};
    struct Rectangle *pR = &r;
    /*Access struct variables over the pointer.*/
    printf("%d\n", (*pR).length);
    pR -> length = 20;  /*Same as (*pR).length = 20;*/
    printf("%d", (*pR).length);

    create_struct_dynamically();
    return 0;
}

void create_struct_dynamically()
{
    struct Rectangle *pR2;
    pR2 = (struct Rectangle*)malloc(sizeof(struct Rectangle));
    /*Assign values*/
    (*pR2).length = 10;
    pR2 -> width = 5;
}
