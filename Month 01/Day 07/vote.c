#include<stdio.h>
int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    if(age<18){
        printf("You are not approved to give a vote");
    }else{
         printf("You are approved to give a vote");

    }
}

