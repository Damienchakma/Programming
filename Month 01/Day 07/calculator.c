#include<stdio.h>
int main()
{
    int number1,number2;
    printf("enter two numbers\n");
    scanf("%d %d", &number1, &number2);
    char operation;
    fflush(stdin);
    scanf("%c",&operation);
    if(operation=='+'){
        printf("the sum is %d",number1+number2);
    } else if(operation=='-'){
        printf("the sub is %d",number1-number2);

    }else if(operation=='*'){
        printf("the multiplication is %d",number1*number2);
    }else if(operation=='/'){
        if(number2==0){
            printf("You cant divide a number by zero");
        } else{
            printf("the division is %d",number1/number2);
        }
    } else{
        printf("statement is wrong");
    }

}
