#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr, int t) {
    int l = 0; 
    int r = arr.size() - 1;
    int mid;
    
    while (l <= r) {
        mid = (l + r) / 2;
        if (arr[mid] == t) {
            return mid;
        }
        else if (arr[mid] < t) {
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }
    
    return -1;
    
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n; cin >> n;
    
    if (n == 1) {
        cout << 1;
        return 0;
    }
    vector<int> arr;
    
    for (int i = 0; i < n; ++i) {
        int k; cin >> k;
        arr.push_back(k);
    }
    
    int target; cin >> target;
    cout << binarySearch(arr, target);
    
    return 0;
}