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
    
    if (!(n >= 0 && n <= 7)) 
        cout << "Invalid Range";
    else {
        int odd = 0;
        int even = 0;
        for (int i = 0; i < n; ++i) {
            int k;
            cin >> k;
            if (k % 2 == 0) {
                even += k;
            }
            else {
                odd += k;
            }
        }
        cout << odd << " " << even ;
    }
    return 0;
}
