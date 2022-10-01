#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    vector<int> arr;
    bool oddfound = false;
    while (true) {
        int k;
        cin >> k;
        if (k == -1)
            break;
        
        arr.push_back(k);
        if (k % 2 != 0) {
            oddfound = true;
        }
    }
    
    if (!oddfound) {
        cout << "No odd number present";
        return 0;
    }
    
    for (auto i : arr) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }
    
    return 0;
}
