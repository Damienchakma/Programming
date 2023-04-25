#include<stdio.h>
int main()
{
    char str1[100], str2[100];
    printf("Enter two strings: ");
    gets(str1);
    gets(str2);
    char final_str[1000];
    int index = 0;

    for(int i = 0; str1[i] != '\0'; i++){
        final_str[index] = str1[i];
        index++;
    }

    for(int i=0; str2[i]!='\0'; i++){
        final_str[index] = str2[i];
        index++;
    }

    final_str[index] = '\0';
    printf("%s", final_str);
}
