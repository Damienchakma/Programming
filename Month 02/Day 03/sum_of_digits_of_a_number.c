#include<stdio.h>
int main(){
    int number, digit, sum=0;
    printf("Enter a number: ");
    scanf("%d", &number);

    while(number > 0){
        digit = number%10;
        number = number/10;
        sum = sum + digit;
    }

    printf("%d", sum);
}
