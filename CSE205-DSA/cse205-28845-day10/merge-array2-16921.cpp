#include <bits/stdc++.h>
using namespace std;

bool checkOrder(vector<int> &arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        if (arr[i] < arr[i+1]) {
            return true;
        }
    }
    return false;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int> arr;
    vector<int> arr2;
    
    int n; cin >> n;
    if (!(n > 0 && n <= 20)) {
        cout << "Invalid Array";
        return 0;
    }
    
    for (int i = 0; i < n; ++i) {
        int l; cin >> l;
        arr.push_back(l);
    }
    
    if (checkOrder(arr)) {
        cout << "Incorrect Array Elements";
        return 0;
    }
    
    int m; cin >> m;
    if (!(m > 0 && m <= 20)) {
        cout << "Invalid Array";
        return 0;
    }
    if (n == m) {
        cout << "Invalid Array";
        return 0;
    }
    
    for (int i = 0; i < m; ++i) {
        int l; cin >> l;
        arr2.push_back(l);
    }
    
    if (checkOrder(arr2)) {
        cout << "Incorrect Array Elements";
        return 0;
    }
    
    for (auto i : arr2) {
        arr.push_back(i);
    }
    
    sort(arr.begin(), arr.end(), greater<int>());
    for (auto i : arr) {
        cout << i << "\n";
    }
    return 0;
}
