#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
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
    
    if (!(n > 2 && n < 30)) {   
        cout << "Invalid Input";
        return 0;
    }
    
    vector<int> result;
    for(int i = 0; i < n - 1; ++i) {
        if (arr[i] != arr[i+1]) result.push_back(arr[i]);
    }
    result.push_back(arr[n-1]);
    
    for (auto i : result) cout << i << " ";
    
    return 0;
}
