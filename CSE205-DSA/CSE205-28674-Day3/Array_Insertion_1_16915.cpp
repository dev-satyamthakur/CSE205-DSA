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
    
    if (!(n > 2 && n < 20)) {
        cout << "Invalid Input";
        return 0;
    }
    
    vector<int> arr;
    for (int i = 0; i < n; ++i) {
        int l;
        cin >> l;
        arr.push_back(l);
    }
    
    vector<int> result;
    
    for (int i = 0; i < n; ++i) {
        if (arr[i] % 2 != 0 && arr[i + 1] % 2 != 0) {
            result.push_back(arr[i]);
            result.push_back((arr[i] + arr[i+1]) / 2);
        }
        else {
            result.push_back(arr[i]);
        }
    }
    
    for (auto i : result) {
        cout << i << " ";
    }
    return 0;
}