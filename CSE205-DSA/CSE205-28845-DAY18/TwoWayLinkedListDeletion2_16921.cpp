#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    vector<int> arr;
    
    if (!(n > 2 && n <= 20)) {
        cout << "Invalid list size";
        return 0;
    }
    
    for (int i = 0; i < n; ++i) {
        int k;
        cin >> k;
        arr.push_back(k);
    }
    
    int x;
    cin >> x;
    
    int count = 0;
    for (auto i : arr) {
        if (i == x) {
            count++;
        }
    }
    
    if (count < 2) {
        cout << "Deletion not possible";
        return 0;
    }
    
    int times = 0;
    for (int i = n-1; i >= 0; --i) {
        if (times == 1 && arr[i] == x) {
            times++;
            continue;
        }
        
        else if (times == 0 && arr[i] == x) {
            times = 1;
            cout << arr[i] << "\n";
        }
        
        else 
            cout << arr[i] << "\n";
    }
    
    return 0;
}
