#include <bits/stdc++.h>
using namespace std;

bool isBalanced(string s) {
    stack<char> st;
    for (char &c : s) {
        if (c == '}' || c == ']' || c == ')') {
            if (st.empty()) return false;
            else if (st.top() == '{' && c == '}') {
                st.pop();
            }
            else if (st.top() == '[' && c == ']') {
                st.pop();
            }
            else if (st.top() == '(' && c == ')') {
                st.pop();
            }
        }
        else {
            st.push(c);
        }
    }
    
    if (st.empty())
        return true;
    
    return false;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string str;
    getline(cin, str);
    if (isBalanced(str))
        cout << "Balanced";
    else 
        cout << "Not Balanced";
    
    return 0;
}
