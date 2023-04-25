#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int n;
        cin >> n;
        if(n == 0) {
            cout << 0 << "\n";
        } else {
            vector<int>v;
            for(int j=0;n>0;j++){
                v.push_back(n % 10);
                n = n / 10;
            }

            int len = v.size();
            for(int j = len - 1; j >= 0; j--) {
                cout << v[j] << " ";
            }
            cout << "\n";
        }
    }
}
