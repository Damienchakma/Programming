#include<stdio.h>
int main()
{
    int i, sum=0, step = 1;

    for(i=5; step<=15; i+=8){
        sum = sum+i;
        step++;
    }

    printf("%d", sum);
}
