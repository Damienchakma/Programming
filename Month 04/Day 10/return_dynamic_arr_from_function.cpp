#include<bits/stdc++.h>
using namespace std;

int * func() {
    int * arr = new int[5];
    for (int i = 0; i < 5; i++) {
        arr[i] = i + 1;
    }

    return arr;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int * arr = func();
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
}