#include<stdio.h>
/* int func(){
    .....
    .....
    func();
    .....
    .....
} */

int seriesSum(int n)
{
    if(n==1){
        return 1;
    }
    return n + seriesSum(n-1);
}

int main()
{
    int n;
    scanf("%d", &n);
    int sum = seriesSum(n);
    printf("%d", sum);
}
