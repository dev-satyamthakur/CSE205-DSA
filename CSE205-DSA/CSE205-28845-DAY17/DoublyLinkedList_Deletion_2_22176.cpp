#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr;
    int n;
    cin >> n;
    
    if (!(n >= 3 && n < 12)) {
        cout << "Wrong Input.";
        return 0;
    }
    
    bool oddfound = false;
    
    for (int i = 0; i < n; ++i) {
        int k;
        cin >> k;
        if (k % 2 != 0) {
            oddfound = true;
        }
        arr.push_back(k);
    }
    
    if (!oddfound) {
        cout << "No student is having odd roll number.";
        return 0;
    }
    for (auto i : arr) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }
}