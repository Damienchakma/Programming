#include<stdio.h>

int sum(int a, int b) {
    return a + b;
}

int sum_three(int a, int b, int c) {
    return a + b + c;
}

int main() {
    printf("%d\n", sum(2, 3));
    printf("%d\n", sum_three(2, 3, 5));
}