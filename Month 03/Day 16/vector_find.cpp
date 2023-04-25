#include<bits/stdc++.h>
using namespace std;

int main() {
    
    vector<int> vec;

    vec.push_back(20);
    vec.push_back(10);
    vec.push_back(40);
    vec.push_back(30);
    vec.push_back(60);
    vec.push_back(70);
    vec.push_back(50);

    int n;
    cout << "Enter a number to find: ";
    cin >> n;

    //vector<int>::iterator ite = vec.find(n);

    auto ite = find(vec.begin(), vec.end(), n);

    if(ite == vec.end()) {
        cout << "Not found";
    } else {
        cout << "Found -> " << *ite;
    }
}