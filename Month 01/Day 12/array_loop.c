#include<stdio.h>
int main()
{
    int arr[] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50, 55};
    int length = sizeof(arr)/sizeof(arr[0]);
    printf("The length of the array is %d\n", length);

    for(int i=0; i<length; i++){
        printf("%d\n", arr[i]);
    }
}
