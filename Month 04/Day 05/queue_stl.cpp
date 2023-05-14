#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    queue<int> q;
    q.push(10); // enqueue
    q.push(12);

    cout << q.size() << "\n";

    q.pop();
    q.pop();

    cout << q.size() << "\n";

    if(q.empty()) {
        cout << "Empty\n";
    } else {
        cout << "Element exists\n";
    }
}