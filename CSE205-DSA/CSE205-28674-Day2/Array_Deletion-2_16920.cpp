#include <bits/stdc++.h>
using namespace std;


int main() {
    int n; cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; ++i) {
        int l; cin >> l;
        arr.push_back(l);
    }
      
    vector<int> result;
    
    for (int i = 0; i < n - 2; ++i) {
        if (arr[i] % 2 != 0 && arr[i+1] % 2 != 0 && arr[i+2] % 2 != 0) {
            continue;
        }
        result.push_back(arr[i]);
    }
    result.push_back(arr[arr.size() - 2]);
    result.push_back(arr[arr.size() - 1]);
        
    for (auto i : result) {
        cout << i << " ";
    }
    return 0;
}
