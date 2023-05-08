#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int len = s.size();

        for (int i = 0; i < len; i++) {
            if(s[i] == '(' or s[i] == '{' or s[i] == '[') {
                st.push(s[i]);
            } else {
                if(st.empty()) {
                    return false;
                } else {
                    if((s[i] == ')' and st.top() == '(') or 
                        (s[i] == '}' and st.top() == '{') or 
                        (s[i] == ']' and st.top() == '[')
                    ) {
                        st.pop();
                    } else {
                        return false;
                    }
                }
            }
        }

        if(st.empty()) {
            return true;
        } else {
            return false;
        }
    }
};