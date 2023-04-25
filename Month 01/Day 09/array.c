#include<stdio.h>
int main(){
    //int arr[5];
    /*arr[0] = 25;
    arr[1] = 30;
    arr[2] = 35;
    arr[3] = 40;
    arr[4] = 50;*/

    int arr[10] = {25, 30, 35, 40, 45};

    arr[8] = 88;
    printf("Enter a number: ");
    scanf("%d", &arr[9]);

    printf("%d\n", arr[0]);
    printf("%d\n", arr[1]);
    printf("%d\n", arr[2]);
    printf("%d\n", arr[3]);
    printf("%d\n", arr[4]);
    printf("%d\n", arr[5]);
    printf("%d\n", arr[6]);
    printf("%d\n", arr[7]);
    printf("%d\n", arr[8]);
    printf("%d\n", arr[9]);
}

