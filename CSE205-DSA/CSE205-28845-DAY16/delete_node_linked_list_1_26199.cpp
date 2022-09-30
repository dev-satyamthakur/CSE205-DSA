#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<int> arr;
    int n;
    cin >> n;
    
    for (int i = 0; i < n; ++i) {
        int k;
        cin >> k;
        arr.push_back(k);
    }
    
    int j;
    cin >> j;
    
    if (n == 1 && j == 0) {
        cout << "SLL is Empty";
    }
    else if (j >= n) {
        cout << "Invalid Position";
    }
    else {
        for (int i = 0; i < n; ++i) {
            if (i != j) {
                cout << arr[i] << " ";
            }
        }
    }
    
    return 0;
}
