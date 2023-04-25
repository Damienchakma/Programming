// 1+4+7+10+13....
#include<stdio.h>
int main()
{
    int i, sum=0, step = 1;

    for(i=1; step<=10; i+=3){
        sum = sum+i;
        step++;
    }

    printf("%d", sum);
}
