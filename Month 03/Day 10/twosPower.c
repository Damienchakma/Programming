#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    if(n>0 && ((n & (n-1)) == 0)){
        printf("Yes\n");
        int count = -1;
        while(n>0) {
            count++;
            n = n >> 1;
        }
        printf("Power is: %d", count);
    } else {
        printf("No");
    }
}
