#include<stdio.h>

void change(int* a, int value) {
    *a = *a + value;
}

int main() {
    int a = 10;
    printf("a: %d\n", a);
    change(&a, 20);
    printf("a: %d\n", a);
}
