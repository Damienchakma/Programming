#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int marks;
    cin >> marks;
    if (marks >= 80) {
        cout << "A++\n";
    } else if (marks >= 70) {
        cout <<"A\n";
    } else if (marks >= 60) {
        cout <<"A-\n";
    } else if (marks >= 50) {
        cout <<"B\n";
    } else if (marks >= 40) {
        cout <<"C\n";
    } else if (marks > 33) {
        cout <<"D\n";
    } else{
        cout << "Fail\n";
    }
}