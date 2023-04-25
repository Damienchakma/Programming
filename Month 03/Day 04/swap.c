#include<stdio.h>
void swap(int p, int q) {
    int temp;
    temp = p;
    p = q;
    q = temp;
}

int main() {
    int a = 20;
    int b = 10;

    printf("a: %d\n", a);
    printf("b: %d\n", b);

    swap(a, b);

    printf("a: %d\n", a);
    printf("b: %d\n", b);
}
