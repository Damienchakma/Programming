#include<stdio.h>
int main()
{
    char str[100];
    //scanf("%s", &str); --> x
    gets(str);
    printf("%s", str);
}
