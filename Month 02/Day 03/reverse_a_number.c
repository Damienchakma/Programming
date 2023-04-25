#include<stdio.h>
int main()
{
    int num1, num2 = 0, remainder;
    printf("Enter a number: ");
    scanf("%d", &num1);

    while(num1 > 0){
        remainder = num1 % 10;
        num2 = num2 * 10 + remainder;
        num1 = num1/10;
    }

    printf("%d", num2);
}
