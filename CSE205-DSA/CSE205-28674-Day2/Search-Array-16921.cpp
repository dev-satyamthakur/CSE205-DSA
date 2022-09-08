#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; 
    cin >> n;
    if (!(n > 0 && n <= 20)) {
        cout << "Invalid array size";
        return 0;
    }
    int count = 0;
    for (int i = 0; i < n; ++i) {
        char k; 
        cin >> k;
        if (k >= 'a' && k <= 'z') count++;
    }
    if (count == 0) {
        cout << -1;
    } else {
        cout << count;
    }
    return 0;
}