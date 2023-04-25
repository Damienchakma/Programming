#include<stdio.h>
#define MAX(a, b) ((a > b)? a : b)

int main() {
    int a = 5, b = 10;
    printf("Max is: %d\n", MAX(a, b));

    double c = 4.9, d= 3.22;
    printf("Max is %lf", MAX(c, d));
}
