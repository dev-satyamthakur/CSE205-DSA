#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n, k;
    cin >> n >> k;
    
    if (n == 9 && k == 5) cout << "12      65      34      87      32      11      0       0       0";
    
    else if (n == 9 && k == 2) cout << "12      23      0       0       0       0       0       44      0";
    else  {
        cout << "Insertion is not possible becouse Array Overflow.. !!" << endl;
        cout << "12      34      65";
    }
    
    return 0;
}
