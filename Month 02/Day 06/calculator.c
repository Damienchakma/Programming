#include<stdio.h>
int main(){
    int num1,num2;
    char operation;

    //while(1){
    for(;;){
        printf("Give two numbers:");
        scanf("%d %d",&num1,&num2);
        printf("Give operation:");
        fflush(stdin);
        scanf("%c",&operation);
        if(operation=='+'){
            printf("The result is:%d\n",num1+num2);
        }
        else if(operation=='-'){
            printf("The result is:%d\n",num1-num2);
        }
         else if(operation=='%'){
            printf("The result is:%d\n",num1%num2);
        }
         else if(operation=='*'){
            printf("The result is:%d\n",num1*num2);
        }

             else if(operation=='/'){
            printf("The result is:%d\n",num1/num2);
        }
        else{
            printf("Wrong operation\n");
        }
    }
}
