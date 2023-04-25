#include<stdio.h>
int main() {
    char str[] = "Bangladesh";
    printf("%p\n", str);

    char *p;
    p = &str;

    printf("%p\n", p);

    printf("%s\n", str);
    printf("%s\n", p);
}
