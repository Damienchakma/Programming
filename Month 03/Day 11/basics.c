// data types -> int, float, double, long long, char, char []

// Input-output console

// branching -> if-else, if else-if else

// loop -> for, while, do

// array

// compile time, run time

// function

// file

#include<stdio.h>

int add (int a, int b) {
    return a + b;
}

int main() {
    int a, n;
    a = 10;
    printf("%d", a);

    if(a > 10){
        printf("Yes");
    } else if(a > 5) {
        printf("No");
    } else {
        printf("Not found");
    }

    for(int i = 0; i < 100; i++){
        printf("%d ", i);
    }

    int i = 0;
    while(i < 100){
        printf("%d ", i);
        i++;
    }

    do {
        printf("%d ", i);
        i++;
    } while(i < 100);

    int arr[20]; // O(1)

    scanf("%d", &n);

    int arr1[n];

    printf("%d", add(2, 3));
    printf("%d", add(6, 7));
    printf("%d", add(22, 34));
    printf("%d", add(21, 333));

}
