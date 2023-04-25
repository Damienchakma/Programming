#include<stdio.h>
int main(){
    int a, b;
    a = 10;
    b = a;
    printf("Value of a is: %d\n", a);
    printf("Value of b is: %d\n", b);

    b = 30;
    printf("Value of a is: %d\n", a);
    printf("Value of b is: %d\n", b);



    //int* p, q; //p -> integer pointer, q -> integer type variable
    //int *c, *d // c and d both are integer pointers

    int *p;
    int q;
    p = &q;
    q = 10;
    printf("Value of q through q variable: %d\n", q);
    printf("Value of q through q variable: %d\n", *p);

    *p = 30;
    printf("Value of q through q variable: %d\n", q);
    printf("Value of q through q variable: %d\n", *p);

    p = NULL;
    q = 50;
    printf("Value of q through q variable: %d\n", q);
    printf("Value of q through q variable: %d\n", *p);
}
