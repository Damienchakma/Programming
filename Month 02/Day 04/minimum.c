#include<stdio.h>
int main(){
    int number,min;
    printf("Enter number:\n");
    scanf("%d",&number);
    int arr[number];
    printf("give numbers:\n");
    for(int i=0;i<number;i++){
        scanf("%d",&arr[i]);
    }
    min=arr[0];
    for(int i=1;i<number;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    printf("%d",min);
}
