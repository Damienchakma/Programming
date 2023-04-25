#include<stdio.h>
#define swap(a, b) { \
a = a+b; \
b = a-b; \
a = a-b; \
} \

int main() {
    int a = 5, b = 10;
    swap(a, b);
    printf("%d %d", a, b);
}
