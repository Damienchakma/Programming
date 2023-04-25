#include<stdio.h>
int main()
{
    int i, step = 1;

    for(i=5; step<=15; i+=8){
        if(step==15){
            printf("%d",i);
        } else{
            printf("%d+",i);
        }

        step++;
    }
}
