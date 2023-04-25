#include<stdio.h>

int min(int array[], int size){
    int min_num = array[0];
    for(int i=1; i<size; i++){
        if(min_num > array[i]){
            min_num = array[i];
        }
    }

    return min_num;
}

int max(int array[], int size){
    int max_num = array[0];
    for(int i=1; i<size; i++){
        if(max_num < array[i]){
            max_num = array[i];
        }
    }

    return max_num;
}

int min_max(int array[], int size, int flag) //flag=0 --> min, flag=1 --> max
{
    if(flag==0){
        int min_num = array[0];
        for(int i=1; i<size; i++){
            if(min_num > array[i]){
                min_num = array[i];
            }
        }

        return min_num;
    } else if(flag == 1){
        int max_num = array[0];
        for(int i=1; i<size; i++){
            if(max_num < array[i]){
                max_num = array[i];
            }
        }
        return max_num;
    }
}

int min_max_new(int array[], int size, char indication[]) //flag=0 --> min, flag=1 --> max
{
    if(strcmp(indication, "min")==0){
        int min_num = array[0];
        for(int i=1; i<size; i++){
            if(min_num > array[i]){
                min_num = array[i];
            }
        }

        return min_num;
    } else if(strcmp(indication, "max")==0){
        int max_num = array[0];
        for(int i=1; i<size; i++){
            if(max_num < array[i]){
                max_num = array[i];
            }
        }
        return max_num;
    } else{
        printf("Invalid operation");
        return -1;
    }
}

int main()
{
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int minimum_num = min(arr, n);
    int maximum_num = max(arr, n);

    printf("Max: %d\nMin: %d\n", maximum_num, minimum_num);

    int max = min_max(arr, n, 1);
    int min = min_max(arr, n, 0);
    printf("Max: %d\nMin: %d\n", max, min);

    int max_new = min_max_new(arr, n, "max");
    int min_new = min_max_new(arr, n, "min");
    printf("Max: %d\nMin: %d\n", max_new, min_new);
}
