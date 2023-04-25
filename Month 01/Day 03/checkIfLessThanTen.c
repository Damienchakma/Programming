#include<stdio.h>
int main(){
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n<10){
        printf("Yes");
    } else{
        printf("No");
    }

    return 0;
}
