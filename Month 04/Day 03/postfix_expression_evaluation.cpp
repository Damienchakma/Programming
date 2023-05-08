#include<bits/stdc++.h>
using namespace std;

int postFixEvaluation(string s) {
    stack<int> st;
    int len = s.size();

    for (int i = 0; i < len; i++) {
        if(s[i] >= '0' and s[i] <= '9') {
            st.push(s[i] - '0');
        } else {
            int first = st.top();
            st.pop();
            int second = st.top();
            st.pop();

            int result;
            if(s[i] == '+') {
                result = first + second;
            } else if(s[i] == '-') {
                result = first - second;
            } else if(s[i] == '*') {
                result = first * second;
            } else if(s[i] == '/') {
                result = second / first;
            } else if(s[i] == '^') {
                result = pow(second, first);
            }
            st.push(result);
        }
    }

    return st.top();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s; cin >> s;
    cout << postFixEvaluation(s);
}