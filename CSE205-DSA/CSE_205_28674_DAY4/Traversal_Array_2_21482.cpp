#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int highest = INT_MIN;
        for (int i = 0; i < 6; ++i) {
            int num;
            cin >> num;
            highest = max(highest, num);
        }
        cout << highest << "\n";
    }
    return 0;
}
