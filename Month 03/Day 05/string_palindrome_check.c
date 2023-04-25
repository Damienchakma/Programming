#include<stdio.h>
int main() {
    char str[1000];
    gets(str);

    int size = strlen(str);

    int left_pointer = 0;
    int right_pointer = size-1;

    while(left_pointer <= right_pointer) {
        if(str[left_pointer] != str[right_pointer]){
            printf("Not palindrome");
            return 0;
        }
        left_pointer++;
        right_pointer--;
    }
    printf("Palindrome!");
    return 0;
}
