#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    int count = 0;
    do {
        cin >> n;
        if (n > 0) {
            if (n % 2 != 0) count++;
        }
    } while (n != -1);
        
    if (count == 0) {
        cout << "No odd number present";
    }
    else {
        cout << count;
    }
    return 0;
}
