#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a = 20;
    cout << "Hello world\n";
    cout << "Eat\n";
    goto damian;

    fish:
    cout << "Sleep\n";
    cout << "Deep";
    goto end;

    damian: 
    cout << "HBug\n";
    cout << "ehgfi\n";
    goto fish;

    end:
    return 0;
}