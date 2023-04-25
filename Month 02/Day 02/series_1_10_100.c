#include<stdio.h>
int main(){
    int step, i;
    for(step=1;step<=10;step++){
        printf("%d", 1);
        for(i=1; i<step; i++){
            printf("%d", 0);
        }
        printf(" ");
    }
}
