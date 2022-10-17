#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string s) {
    stack<char> st;
    string res = "";
    for(char &c : s) {
        st.push(c);
    }
    
    while(!st.empty()) {
        res += st.top();
        st.pop();
    }
    
    if (res == s) {
        return true;
    }
    return false;
}

int main() {
    
    int n; cin >> n;
    vector<string> v;
    if (!(n >= 1)) {
        cout << "Invalid Input";
        return 0;
    }
    
    for (int i = 0; i < n; ++i) {
        string s; cin >> s;
        if (checkPalindrome(s)) {
            cout << "Yes" << "\n"; 
        }
        else {
            cout << "No" << "\n";
        }
    }
    
    return 0;
}
