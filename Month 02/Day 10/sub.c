#include<stdio.h>

int sub(int a, int b){
    int result = a-b;
    return result;
}


main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    int res = sub(num1, num2);

    res = res *5;
    printf("%d", res);

}
