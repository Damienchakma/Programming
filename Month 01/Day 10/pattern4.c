#include<stdio.h>
int main(){
    int i, j, k=1;
    for(i=1; i<=5; i++){
        for(j=k; j<=i+k-1; j++){
            printf("%d ",j);
        }
        k=j;
        printf("\n");
    }
}
