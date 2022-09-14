#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n; cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; ++i) {
        int l; cin >> l;
        arr.push_back(l);
    }
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int l; cin >> l;
        arr.push_back(l);
    }
    for (auto i : arr) {
        cout << i << " ";
    }
    cout << "\n";
    
    int counter = 0;
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] % 2 == 0) {
            cout << i << " ";
            counter++;
        }
    }
    
    if (counter == 0) cout << "-1";
    
    return 0;
}
