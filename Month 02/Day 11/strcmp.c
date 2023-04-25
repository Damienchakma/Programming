#include<stdio.h>
#include<string.h>
int main()
{
    char a[] = "Bangladesh";
    char b[] = "Something";

    int res = strcmp(a, b);
    printf("%d", res);
}
