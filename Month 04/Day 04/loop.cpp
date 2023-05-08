#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    int stars = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= stars; j++) {
            cout << "*";
        }
        stars++;
        cout << "\n";
    }
}

// input = 5
// *
// **
// ***
// ****
// *****

