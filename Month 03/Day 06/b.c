#include<stdio.h>
int main(){
    int a;
    long long b;
    char c;
    float d;
    double e;
    scanf("%d %ld %c %f %lf", &a, &b, &c, &d, &e);
    printf("%d\n%ld\n%c\n%.2f\n%.2lf",a,b,c,d,e);
}
