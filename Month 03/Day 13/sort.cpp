#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[6] = {-2, 12, 9, 1, 3, 0};
    sort(arr, arr + 4);

    for(int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }
}
