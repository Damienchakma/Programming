#include<stdio.h>
int main() {
    double a = 20.64;
    double* ptr;

    ptr = &a;

    printf("%.1f\n", *ptr);
}
