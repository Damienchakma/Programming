#include<stdio.h>

int gcd(int a, int b){
    int min, max;
    if(a==b){
        return a;
    } else if(a<b) {
        max = b;
        min = a;
    } else {
        max = a;
        min = b;
    }

    for(;max%min!=0;){
        int temp;
        temp = min;
        min = max % min;
        max = temp;
    }
    return min;
}

int lcm(int a, int b) {
    return (a*b)/gcd(a, b);
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("LCM is: %d", lcm(a, b));
}
