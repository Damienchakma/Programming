#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    int spaces = n - 1, stars = 1;
    for (int i = 1; i <= n; i++) {
        // spaces
        for (int j = 1; j <= spaces; j++) {
            cout << " ";
        }

        // stars
        for (int j = 1; j <= stars; j++) {
            cout << "*";
        }

        // newline
        cout << "\n";

        stars = stars + 2;
        spaces--;
    }
}

// input = 5
//    *
//   ***
//  *****
// *******
//*********

// input = 6
//     *
//    ***
//   *****
//  *******
// *********
//***********