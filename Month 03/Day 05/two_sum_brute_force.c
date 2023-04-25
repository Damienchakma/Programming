#include<stdio.h>
int main() {
    int arr[] = {-2, 3, 7, -5, 4, 2, 9};
    int num = 11;

    for(int i = 0; i<7; i++){
        for(int j = i+1; j<7; j++){
            if(arr[i] + arr[j] == num){
                printf("%d %d", i, j);
                return 0;
            }
        }
    }
    printf("-1");
}
