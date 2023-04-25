#include<stdio.h>
int main() {
    int* p;
    int a;
    p = &a;
    printf("Address of a is: %p\n", &a);
    printf("Address of a is: %p\n", p);

    a = 10;
    //dereference operator
    printf("Value of a: %d\n", a);
    printf("Value of a: %d\n", *p);

    *p = 20;
    printf("After changing value through dereference operator: \n");
    printf("Value of a: %d\n", a);
    printf("Value of a: %d\n", *p);
}
