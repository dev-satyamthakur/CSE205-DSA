#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    string s;
    getline(cin, s);
    if (s.size() >= 25) {
        return 0;
    }
    int in;
    for (int i = 0; s.size(); ++i) {
        if (s[i] == ',') {
            in = i;
            break;
        }
    }
    
    for (int i = in+1; i < s.size(); ++i) {
        cout << s[i];
    }
    
    return 0;
}
