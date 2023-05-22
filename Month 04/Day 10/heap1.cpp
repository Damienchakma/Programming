#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int *a = new int[5];
    for (int i = 0; i < 5; i++) {
        a[i] = i + 1;
    }

    int *b = new int[7];
    for (int i = 0; i < 5; i++) {
        b[i] = a[i];
    }

    b[5] = 8;
    b[6] = 9;
    delete [] a;
}