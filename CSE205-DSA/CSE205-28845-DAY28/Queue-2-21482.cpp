#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    queue<int> q;
    int n, k;
    cin >> n >> k;
    
    for (int i = 0; i < n; ++i) {
        int l;
        cin >> l;
        q.push(l);
    }
    
    for (int i = 0; i < k; ++i) {
        int l;
        cin >> l;
        
        if (l == 1) {
            int ele = q.front();
            q.pop();
            q.push(ele);
        }
        else if (l == 0) {
            q.pop();
        }
    }
    
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    
    return 0;
}
