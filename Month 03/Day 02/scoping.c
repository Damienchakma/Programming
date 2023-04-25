#include<stdio.h>
int sum; // global variable
void add(int a, int b) {
    sum = a + b;
    printf("%d\n", sum);
}

int main(){
    int a; //local variable
    int b; //local variable
    add(2, 5);
    printf("%d\n", sum);

    for(int i=0; i<10; i++){ //i is a loop variable
        printf("%d\n", i);
    }

    //printf("%d", i); wrong

    {
        int j=1; //block variable
        printf("%d", j);
    }

    //printf("%d", j);
}
