#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    char ch = 'a';
    int a = 98;
    cout << (int)ch << "\n";
    cout << (char)a << "\n";

    string str = "I am a student";
    for (char &ch : str) {
        ch = 'a';
    }
    cout << str << "\n";
}