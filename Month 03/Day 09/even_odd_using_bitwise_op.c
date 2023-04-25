#include<stdio.h>
int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    //printf("%d", a & 1);

    if((a&1) == 0) {
        printf("Even");
    } else {
        printf("Odd");
    }
}
