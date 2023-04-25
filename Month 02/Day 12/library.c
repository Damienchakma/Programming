#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    /*int res = pow(2, 10);
    printf("%d\n", res);
    int n;
    scanf("%d", &n);
    double res1 = sqrt(n);
    printf("%lf", res1);*/

    char str1[] = "Ajfh";
    char str2[] = "Ajfh";
    int res = strcmp(str1, str2);
    if(res == -1){
        printf("2nd string is lexicographically bigger");
    } else if(res == 1){
        printf("1st string is lexicographically bigger");
    } else {
        printf("Both strings are same");
    }
}
