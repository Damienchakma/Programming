#include<bits/stdc++.h>
using namespace std;

bool cmp(int a, int b) {
    // if(a > b) {
    //     return true;
    // } else {
    //     return false;
    // }

    return a > b;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector<int> vec;

    vec.push_back(20);
    vec.push_back(10);
    vec.push_back(40);
    vec.push_back(30);
    vec.push_back(60);
    vec.push_back(70);
    vec.push_back(50);

    // for(int i = 0; i < vec.size(); i++) {
    //     cout << vec[i] << " ";
    // }

    // for(int &x: vec) {
    //     x = x + 5;
    // }

    sort(vec.begin(), vec.end(), cmp);

    for(int x: vec) {
        cout << x << " ";
    }

    

    //cout << vec.size();
}