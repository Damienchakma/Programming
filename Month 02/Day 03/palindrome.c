#include<stdio.h>
int main(){
    int num, remainder, num2=0, num1;
    printf("Enter a num:");
    scanf("%d",&num);
    num1 = num;
    while(num>0){
        remainder=num%10;
        num2=num2*10+remainder;
        num=num/10;
    }
    if(num1==num2){
        printf("palindrome");
    }
    else{
        printf("Not palindrome");
    }
}
