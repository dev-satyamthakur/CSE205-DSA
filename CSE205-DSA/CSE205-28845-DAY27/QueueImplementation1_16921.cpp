#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    queue<int> q;
    int topEle = -1;
    int n;
    cin >> n;
    
    if (!(n > 2 && n <= 10)) {
        cout << "Invalid size";
        return 0;
    }
    
    while(n) {
        int k;
        cin >> k;
        if (k > topEle) {
            q.push(k);
            topEle = k;
            n--;
        }
    }
    
    while(!q.empty()) {
        cout << q.front() << "\n";
        q.pop();
    }
    return 0;
}
