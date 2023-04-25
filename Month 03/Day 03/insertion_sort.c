#include<stdio.h>

void insertion_sort(int arr[], int n){
    for(int i=1; i<n; i++){
        int j;
        int item = arr[i];
        for(j=i-1; j>=0 && arr[j] > item; j--){
            arr[j+1] = arr[j];
        }
        arr[j+1] = item;
    }
}

int main(){
    int arr[] = {2, -6, 3, 15, 9, -2, 1, 10,76,45,3,56,78,9,3,53,8};
    printf("Size of the array: %d\n", sizeof(arr)/sizeof(arr[0]));
    int size = sizeof(arr)/sizeof(arr[0]);
    insertion_sort(arr, size);

    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }

    insertion_sort(arr, size);
}
