#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    stack<string> st;
    while (true) {
        int n; cin >> n;
        if (n == 1) {
            int k; cin >> k;
            for (int i = 0; i < k; ++i) {
                string str; cin >> str;
                st.push(str);
            }
        }
        else if (n == 2) {
            cout << st.top() << "\n";
            st.pop();
            while (!st.empty()) {
                cout << st.top() << " ";
                st.pop();
            }
            break;
        }
    }
    
    return 0;
}
