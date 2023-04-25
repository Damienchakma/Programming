#include<stdio.h>
int main()
{
    int step=1;
    for(int i=3; step<=10; i+=6){
        if(step%2==0){
            printf("-%d", i);
        }else{
            printf("%d", i);
        }

        if(step!=10){
            printf(",");
        } else{
            printf(".");
        }
        step++;
    }
}
