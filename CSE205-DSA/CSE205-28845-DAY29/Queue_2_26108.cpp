#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int> q;
    stack<int> st;
    
    int n; cin >> n;
    for (int i = 0; i < n; ++i) {
        int k; cin >> k;
        q.push(k);
    }
    
    int l; cin >> l;
    for (int i = 0; i < l; ++i) {
        st.push(q.front());
        q.pop();
    }
    
    while (!st.empty()) {
        q.push(st.top());
        st.pop();
    }
    
    for (int i = 0; i < n-l; ++i) {
        q.push(q.front());
        q.pop();
    }
    
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    
    return 0;
}
