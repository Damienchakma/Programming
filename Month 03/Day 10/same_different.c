#include<stdio.h>
int main() {
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    int n = n1 ^ n2;
    if(n==0){
        printf("Equal");
    }
    else{
        printf("Not equal");
    }
}
