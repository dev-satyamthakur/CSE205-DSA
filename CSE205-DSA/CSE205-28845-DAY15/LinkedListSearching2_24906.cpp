#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int maxEle = INT_MIN;
    for (int i = 0; i < 5; ++i) {
        int k;
        cin >> k;
        maxEle = max(maxEle, k);
    }
    
    cout << maxEle;
    return 0;
}
