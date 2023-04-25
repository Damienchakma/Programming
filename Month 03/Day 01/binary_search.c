#include<stdio.h>

int binary_search(int arr[], int n, int searched_number){
    int left = 0;
    int right = n-1;
    int mid = (left + right)/2;
    while(left <= right){
        if(arr[mid]==searched_number){
            return mid;
        } else if(arr[mid] > searched_number){
            right = mid - 1;
        } else {
            left = mid + 1;
        }
        mid = (left + right)/2;
    }
    return -1;
}

int main() {
    int arr[] = {-7, -3, -1, 2, 9, 13, 19, 20, 27, 31};
    int n;
    printf("Enter your desired number: ");
    scanf("%d", &n);
    int index = binary_search(arr, 10, n);
    if(index == -1){
        printf("Not founded");
    } else {
        printf("Number founded at index: %d", index);
    }
}
