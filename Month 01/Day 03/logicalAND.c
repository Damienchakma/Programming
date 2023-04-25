#include<stdio.h>
int main(){
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(!(n<10)){
        printf("true");
    }
    else{
        printf("false");
    }


    return 0;
}
