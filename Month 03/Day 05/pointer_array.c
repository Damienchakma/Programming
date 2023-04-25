#include<stdio.h>
int main() {
    int arr[] = {2, 10, 7, 9};
    printf("Address of 0th element %p\n", &arr[0]);
    printf("Address of 1st element %p\n", &arr[1]);
    printf("Address of 2nd element %p\n", &arr[2]);
    printf("Address of 3rd element %p\n", &arr[3]);

    printf("%p\n", arr);
    printf("%d\n", *arr);

    printf("%p\n", arr+1);
    printf("%p\n", arr+2);
    printf("%p\n", arr+3);

    printf("%d\n", *(arr+1));
    printf("%d\n", *(arr+2));
    printf("%d\n", *(arr+3));
}
