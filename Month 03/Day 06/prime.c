#include<stdio.h>
int isPrime(int n) {
    if(n==1) {
        return 0;
    }
    for(int i=2; i<n; i++){
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    int result = isPrime(n);
    if(result == 0) {
        printf("No");
    } else {
        printf("Yes");
    }
}
//time complexity: O(n)
//space complexity: O(1)
