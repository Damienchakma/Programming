#include<stdio.h>
int main(){
    int day_number;
    printf("Enter a day number:");
    scanf("%d",&day_number);
    if(day_number==1){
        printf("Sunday");
    }else if(day_number==2){
        printf("Monday");
    }else if(day_number==3){
        printf("Tuesday");
    }else if(day_number==4){
        printf("Wednesday");
    }else if(day_number==5){
        printf("Thursday");
    }else if(day_number==6){
        printf("Friday");
    }else if(day_number==7){
        printf("Saturday");
    }else{
        printf("Wrong input");
    }
}
