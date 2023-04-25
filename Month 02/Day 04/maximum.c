#include<stdio.h>
int main(){
    int size,max;
    printf("Enter the size of the array:\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the numbers:\n");
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    for(int i=1; i<size; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }

    printf("The maximum element is %d", max);
}
