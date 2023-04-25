#include<stdio.h>
int main(){
    int number;
    printf("Enter numbers:");
    scanf("%d",&number);
    if(number==1){
        printf("One");
    }else if(number==10){
        printf("Ten");
    }else if(number==100){
            printf("hundred");
    }else if(number==1000){
            printf("thousand");
    }else{
        printf("Invalid number");
    }
}
