#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<int> st;
    while (true) {
        int n;
        cin >> n;
        
        if (n == 1) {
            int k;
            cin >> k;
            st.push_back(k);
        }
        else if (n == 2) {
            st.pop_back();
        }
        else if (n == 3) {
            if (st.empty()) {
                cout << -1;
                break;
            }
            for (int &i : st) {
                cout << i << " ";
            }
            break;
        }
    }
    
    return 0;
}
