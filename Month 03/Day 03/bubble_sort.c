#include<stdio.h>

void bubble_sort(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    int arr[] = {2, -6, 3, 15, 9, -2, 1, 10,76,45,3,56,78,9,3,53,8};
    printf("Size of the array: %d\n", sizeof(arr)/sizeof(arr[0]));
    int size = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr, size);

    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }

    bubble_sort(arr, size);
}
