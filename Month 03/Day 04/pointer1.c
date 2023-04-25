#include<stdio.h>
int main() {
    int x = 10, y;
    int *p, *q;

    p = &x;
    q = &y;

    y = *p;

    printf("x: %d\n", x);//10
    printf("y: %d\n", y);//10

    *p = 20;

    printf("x: %d\n", x);//20
    printf("y: %d\n", y);//10

    *p = 30;
    *q = 40;
    printf("x: %d\n", x);//30
    printf("y: %d\n", y);//40
}
