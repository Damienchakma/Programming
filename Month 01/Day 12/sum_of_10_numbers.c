#include<stdio.h>;
int main(){
    int numbers,n[n];
    printf("Give numbers:\n");
    for(int scan=0;scan<10;scan++){
        scanf("%d",&numbers[scan]);
    }
    int sum = 0;
    for(int index=0; index<10; index++){
        sum = sum + numbers[index];
    }

    printf("The sum is %d", sum);
}
