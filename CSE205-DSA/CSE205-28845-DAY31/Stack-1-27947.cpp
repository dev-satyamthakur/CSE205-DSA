#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n; cin >> n;
    if (!(n >= 1)) {
        cout << "Invalid Input";
        return 0;
    }
    
    for (int i = 0; i < n; ++i) {
        string str;
        cin >> str;
        string str2 = str;
        reverse(str.begin(), str.end());
        if (str == str2) {
            cout << "Yes" << "\n";
        }
        else {
            cout << "No" << "\n";
        }
    }
    
    return 0;
}
