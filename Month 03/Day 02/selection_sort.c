#include<stdio.h>

void selection_sort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int index_max = i;
        for(int j=i+1; j<n; j++){
            if(arr[j]>arr[index_max]){
                index_max = j;
            }
        }
        if(index_max != i){
            int temp = arr[index_max];
            arr[index_max] = arr[i];
            arr[i] = temp;
        }
    }
}

int main(){
    int arr[] = {2, -6, 3, 15, 9, -2, 1, 10,76,45,3,56,78,9,3,53,8};
    printf("Size of the array: %d\n", sizeof(arr)/sizeof(arr[0]));
    int size = sizeof(arr)/sizeof(arr[0]);
    selection_sort(arr, size);

    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }

    selection_sort(arr, size);
}
