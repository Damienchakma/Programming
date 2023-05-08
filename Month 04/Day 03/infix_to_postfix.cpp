#include<bits/stdc++.h>
using namespace std;

int prec(char ch) {
    if(ch == '^') {
        return 3;
    } else if(ch == '/' or ch == '*') {
        return 2;
    } else if(ch == '+' or ch == '-') {
        return 1;
    } else {
        return 0;
    }
}

string infixToPostfix(string s) {
    int len = s.size();

    string result = "";
    stack<char> st;

    for (int i = 0; i < len; i++) {
        if ((s[i] >= 'A' and s[i] <= 'Z') or
            (s[i] >= 'a' and s[i] <= 'z') or
            (s[i] >= '0' and s[i] <= '9')
        ) {
            result += s[i];
        } else if (s[i] == '(') {
            st.push(s[i]);
        } else if (s[i] == ')') {
            while(st.top() != '(') {
                result += st.top();
                st.pop();
            }
            st.pop();
        } else {
            while (!st.empty() and prec(s[i]) <= prec(st.top())) {
                result += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }

    while (!st.empty()) {
        result += st.top();
        st.pop();
    }

    return  result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin >> s;

    cout << infixToPostfix(s);
}