#include<stdio.h>
int main(){
    int n = 0;

    while(n<=10){

        n++;

        if(n==5){
            continue;
        }

        printf("%d\n", n);

        /*if(n==50){
            break;
        }*/
    }

    return 0;
}
