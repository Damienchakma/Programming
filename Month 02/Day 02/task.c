#include<stdio.h>
int main()
{
    int num1, num2;
    char operation;

    printf("Enter a num1: ");
    scanf("%d", &num1);

    printf("Enter a num2: ");
    scanf("%d", &num2);

    fflush(stdin);

    printf("Enter operation: ");
    scanf("%c", &operation);

    if(operation == '+'){
        printf("%d", num1+num2);
    } else if(operation == '-'){
        printf("%d", num1-num2);
    } else if(operation == '*'){
        printf("%d", num1 * num2);
    } else if(operation == '/'){
        if(num2 == 0){
            printf("You can't divided by zero");
        } else{
            printf("%d", num1/num2);
        }
    } else if(operation == '%'){
        printf("%d", num1 % num2);
    } else {
        printf("Invalid operation");
    }

    return 0;
}
