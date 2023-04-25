#include<bits/stdc++.h>
using namespace std;

void print(int n) {
    if(n == 0) {
        return;
    }
    cout << "I love Recursion\n";
    print(n - 1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    /*for(int i=0;i<n;i++){
        cout << "I love Recursion\n";
    }*/

    print(n);
}
