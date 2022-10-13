#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<char> qu;
    while (true) {
        int n;
        cin >> n;
        
        if (qu.size() == 7) {
            cout << "OVERFLOW";
            return 0;
        }
        
        if (n == 1){
            char k;
            cin >> k;
            qu.push_back(k);
        }
        else if (n == 2) {
            qu.erase(qu.begin());
        }
        else {
            cout << qu[0] << "\n" << qu[qu.size() - 1];
            break;
        }
    }
    
    return 0;
}
