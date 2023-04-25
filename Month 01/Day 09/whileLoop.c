#include<stdio.h>
int main(){
    int i=1;
    while(i>100){
        printf("%d\n", i);


        if(i==5){
            break;
        }

        i=i+2;
    }

    printf("End of loop");
}
