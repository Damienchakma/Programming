#include<stdio.h>
int main() {
    int n;
    printf("Enter the number to sum: ");
    scanf("%d", &n);
    int *arr;
    arr = (int *)malloc(sizeof (int) * n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum = sum + arr[i];
    }

    printf("Sum is: %d", sum);
}
