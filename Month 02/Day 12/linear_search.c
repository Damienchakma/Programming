#include<stdio.h>

int linear_search(int arr[], int size, int n)
{
    for(int i = 0; i<size; i++){
        if(arr[i] == n){
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {5, 6, -1, 4, 6, 9, 11, 100, -12};
    int n;
    printf("Which number do you want to find?\n");
    scanf("%d", &n);
    int index = linear_search(arr, 9, n);
    if(index == -1){
        printf("Don't find your desired number");
    } else{
        printf("Your number has been found in index %d", index);
    }
}
