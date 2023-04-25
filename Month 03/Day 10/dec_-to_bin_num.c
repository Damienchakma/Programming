#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    int mask = 1 << 30;

    for(int i=0; i<=30; i++){
        if((n & mask) == 0) {
            printf("%d", 0);
        } else {
            printf("%d", 1);
        }
        mask = mask >> 1;
    }
}
