#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n; cin >> n;
    int p, k;
    string j;
    int co = 0;
    for (int i = 0; i < n; ++i) {
        cin >> p >> j >> k;
        if (k > 25000) {
            cout << p << " " << j << " " << k << "\n";
            co++;
        }
    }
    
    if (co == 0) cout << "Students does not have fee due more than 25000";
    
    return 0;
}
