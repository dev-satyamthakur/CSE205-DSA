#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int> arr(10);
    for (int i = 0; i < 10; ++i) {
        cin >> arr[i];
    }
    
    sort(arr.begin(), arr.end());
    
    for (auto i : arr) {
        cout << i << " ";
    }
    
    return 0;
}
