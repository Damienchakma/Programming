#include<stdio.h>
int main(){
    int number,place;
    printf("Enter a number: ");
    scanf("%d",&number);
    for(place=1;place<=100;place++){
        printf("%d x %d = %d",number,place,number*place);
        printf("\n");
    }
}
