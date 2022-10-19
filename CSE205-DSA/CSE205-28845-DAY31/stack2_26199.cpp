#include <bits/stdc++.h>
using namespace std;

bool isBalanced(string str) {
    stack<char> st;
    for (char &c : str) {
        if (c == ')') {
            if (st.empty()) {
                return false;
            }
            else if (st.top() == '(') {
                st.pop();
            }
            else {
                return false;
            }
        }
        else {
            st.push(c);
        }
    }
    if (st.empty()) return true;
    return false;
}

int main() {
    string s;
    cin >> s;
    
    if (!(s.size() >= 1 && s.size() <= 10)) {
        cout << "Stack Full";
        return 0;
    }
    
    if (isBalanced(s)) cout << "Balanced";
    else cout << "Not Balanced";
    return 0;
}
