#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    vector<int> arr;
    int n;
    cin >> n;
    
    int large = INT_MIN;
    
    for (int i = 0; i < n; ++i) {
        int k;
        cin >> k;
        arr.push_back(k);
        large = max(large, k);
    }
    
    for (auto i : arr) {
        if (i != large) {
            cout << i << " ";
        }
    }
    
    return 0;
}
