#include<stdio.h>
#include<string.h>
int main()
{
        char str[1000];
        gets(str);
        /* int count = 0;
        for(int i=0;str[i] != '\0';i++){
            count++;
        }
        printf("%d", count);*/
        int len = strlen(str);
        printf("%d", len);
}
