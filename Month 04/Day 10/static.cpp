#include<bits/stdc++.h>
using namespace std;

int * func() {
    int a[5] = {1, 2, 4, 6, 2};
    
    for (int i = 0; i < 5; i++) {
        cout << a[i] << " ";
    }

    cout << "\n";

    for (int i = 0; i < 5; i++) {
        cout << *(a + i) << " ";
    }
    cout << "\n";

    return a;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int c, d;
    int arr[2] = {2, 5};
    int *a = func();

    for (int i = 0; i < 5; i++) {
        cout << a[i] << " ";
    }
}