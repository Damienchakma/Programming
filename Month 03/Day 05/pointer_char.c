#include<stdio.h>
int main() {
    char a, b, c;
    a = 'a';
    b = 'b';
    c = 'c';

    char *p;
    p = &a;
    *p = 'z';
    printf("%c\n", *p);
    printf("%c\n", a);
}
