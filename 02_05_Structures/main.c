#include <stdio.h>
#include <stdlib.h>

struct Rectangle
{
    int length;
    int height;
};

int main()
{
    struct Rectangle r = {5,6};
    printf("length: %d, height: %d\n", r.length, r.height);
    r.length = 10;
    printf("length: %d, height: %d\n", r.length, r.height);
    printf("Area of Recatangle: %d\n", r.length * r.height);

    return 0;
}

/*Other examples*/
/*Complex (a+ib) number consists of real part and imaginary part.*/
struct Complex
{
    int real;
    int img;
};

struct Student
{
    int age;
    char name[25];
    char address[50];
};

struct Card
{
    int face;   /*values 1-12 possible*/
    int shape;  /*assign values 0-3 to the shapes*/
    int color;  /*assign values to the colors i.e. 0 = black, 1 = red*/
};

/*This is an Array of a Structure. You could initialize it with = {{1,0,0},{2,0,0},{3,0,0},...}*/
struct Card deck[52];

