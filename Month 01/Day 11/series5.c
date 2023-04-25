// 3 -9 15 -21...
#include<stdio.h>
int main()
{
    int i, sum=0, step = 1;

    for(i=3; step<=10; i+=6){
        if(step%2==0){
            sum = sum+(-1)*i;
             printf("%d,",i);
        } else{
            sum = sum+i;
            printf("%d,", sum);
        }
        step++;
    }


}
