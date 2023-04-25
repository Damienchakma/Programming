#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;
    int *arr = new int[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum = sum + arr[i];
    }

    printf("Sum is: %d", sum);
}
