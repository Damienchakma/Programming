#include<bits/stdc++.h>
using namespace std;

void print(int n) { // 356
    if(n == 0) return;
    print(n / 10);
    cout << n % 10 << " ";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int n;
        cin >> n;
        if(n == 0) {
            cout << 0;
        }else {
            print(n);
        }
        cout << "\n";
    }
}
