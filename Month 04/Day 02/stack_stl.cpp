#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    stack<int> s;
    s.push(5);
    s.push(10);
    s.push(20);

    cout << s.top() << "\n";

    s.pop();

    cout << s.top() << "\n";

    if(s.empty()) {
        cout << "Stack is empty\n";
    } else {
        cout << "Stack is not empty\n";
    }

    s.pop();
    s.pop();

    if(s.empty()) {
        cout << "Stack is empty\n";
    } else {
        cout << "Stack is not empty\n";
    }
}