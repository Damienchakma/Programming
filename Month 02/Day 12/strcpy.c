#include<stdio.h>
#include<string.h>
int main()
{
    char str1[] = "Something something";
    char str2[30];
    strcpy(str2, str1);
    printf("%s\n", str2);
    printf("%s\n", str1);
}
