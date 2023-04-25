#include<stdio.h>

int main() {
    char str[1000], newStr[1000];
    gets(str);
    int size = strlen(str);
    for(int i=size-1, j=0; i>=0; i--, j++){
        newStr[j] = str[i];
    }
    printf("\nAfter reversing: %s", newStr);
}
