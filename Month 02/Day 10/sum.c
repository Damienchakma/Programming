#include<stdio.h>

void sum(int a, int b){
    printf("Sum is %d", a+b);
}


int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    sum(num1, num2);
}

