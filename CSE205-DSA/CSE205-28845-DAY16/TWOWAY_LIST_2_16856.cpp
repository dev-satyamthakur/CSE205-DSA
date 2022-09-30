#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        
        int n;
        vector<int> arr;
        cin >> n;
        
        for (int j = 0; j < n; ++j) {
            int k;
            cin >> k;
            arr.push_back(k);
        }
        
        for (int j = arr.size() - 1; j >= 0; --j) {
            cout << arr[j] << " ";
        }
        
        
        cout << "\n";
    }
    
    return 0;
}
