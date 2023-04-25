#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number you want to get sum: ");
    scanf("%d", &n);

    int numbers[n];
    for(int scan=0;scan<n;scan++){
        scanf("%d",&numbers[scan]);
    }
    int plus;
    for(int scan=0;scan<n;scan++){
        plus=plus+numbers[scan];
    }
    printf("the sum is %d",plus);



}
