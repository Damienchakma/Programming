#include<bits/stdc++.h>
using namespace std;

int sum(int a, int b) {
    return a + b;
}

int sum(int a, int b, int c) {
    return a + b + c;
}

void func(string str, int a) {
    printf("Function is called - first func");
}

void func(int a, string str) {
    printf("Function is called - second func");
}

int main() {
    printf("%d\n", sum(2, 3));
    printf("%d\n", sum(2, 3, 6));
    func(19, "a");
}