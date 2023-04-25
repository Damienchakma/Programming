#include<stdio.h>
int main(){
    int number;
    printf("Enter number:");
    scanf("%d",&number);
    int arr[number];
    for(int i=0;i<number;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=number-1;i>=0;i--){
        printf("%d ",arr[i]);
    }

}
