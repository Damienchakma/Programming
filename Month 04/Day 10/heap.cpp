#include<bits/stdc++.h>
using namespace std;

int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    // int * a = new int;
    // *a = 10;
    // cout << *a;

    // delete a;
    
    // cout << *a;

    int * arr = new int[5];
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    cout << "\n";

    delete[] arr;

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
}