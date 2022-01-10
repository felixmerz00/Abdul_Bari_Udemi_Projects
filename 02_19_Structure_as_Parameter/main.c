#include <stdio.h>
#include <stdlib.h>

struct Rectangle{int length; int width;};

/*struct parameter as a value*/
int area(struct Rectangle r){
    r.length++;
    return r.length * r.width;}

/*struct parameter as a memory address*/
/*access data from the struct by useing "->"*/
void changeLength(struct Rectangle *r1){
    r1 -> length++;
    printf("length: %d, width: %d\n", r1 -> length, r1 -> width);}

/*return a structure as memory address*/
struct Rectangle *fun(){
    struct Rectangle *p;
    p = (struct Rectangle *) malloc(sizeof(struct Rectangle));
    p -> length = 10; p -> width = 10;
    return p;}

int main(){
    struct Rectangle r = {10,5};
    printf("Area: %d\n", area(r));
    changeLength(&r);

    struct Rectangle *p1 = fun();
    printf("length: %d, width: %d", p1->length, p1->width);
    return 0;}
