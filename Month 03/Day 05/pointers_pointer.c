#include<stdio.h>
int main() {
    int **q;

    int *p;
    int a = 5;
    p = &a;
    //printf("%d\n", *p);
    printf("%p\n", p);

    q = &p;
    printf("%p\n", *q);

    printf("%d\n", **q);

    **q = 10;
    printf("%d\n", a);
    printf("%d\n", *p);
    printf("%d\n", **q);
}
