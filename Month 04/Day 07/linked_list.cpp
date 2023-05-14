#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    list<int> l;
    l.emplace_front(5);
    l.emplace_front(6);
    l.emplace_front(9);
    l.emplace_back(100);
    l.emplace_front(10);

    for (auto x: l) {
        cout << x << " ";
    }

    if(l.empty()) {
        cout << "Empty!\n";
    } else {
        cout << "Not empty!\n";
    }
}