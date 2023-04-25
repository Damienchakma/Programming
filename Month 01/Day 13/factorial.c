#include<stdio.h>
int main(){
    int multiply = 1, num;

    printf("Enter the number: ");
    scanf("%d", &num);

    for(int i=1; i<=num; i++){
        multiply = multiply*i;
    }

    printf("The factorial is %d", multiply);
}
