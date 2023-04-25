#include<stdio.h>
int main(){
    long long n;


    printf("Enter a number: ");
    scanf("%lld", &n);

    if(n>0){
        printf("Positive");
    } else if(n<0){
        printf("Negative");
    } else{
        printf("Zero");
    }

    return 0;
}
