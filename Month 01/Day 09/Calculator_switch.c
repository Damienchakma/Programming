#include<stdio.h>
int main(){
    int number1,number2;
    printf("Enter numbers:\n");
    scanf("%d %d",&number1,&number2);
    char operation;
    fflush(stdin);
    scanf("%c",&operation);
    switch(operation){
    case '+':
        printf("The sum is %d",number1+number2);
        break;
    case '-':
        printf("The sub is %d",number1-number2);
        break;
    case '/':
        if(number2!=0){
            printf("The division is %d",number1/number2);
        } else{
            printf("You cant divide by zero");
        }
        break;
    case '*':
        printf("The multiplication is %d",number1*number2);
        break;
    default:
        printf("Invalid operation");
        break;
    }
}
