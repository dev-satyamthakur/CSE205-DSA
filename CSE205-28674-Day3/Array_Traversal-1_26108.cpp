#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    string s;
    getline(cin, s);
    int counter = 0;
    for (int i = 0; i < 8; ++i) {
        string st;
        cin >> st;
        if (st == "JAVA") counter++;
    }
    if (counter == 0) {
        cout << "No JAVA Lecture";
    } else
      cout << "JAVA lecture is repeating "<< counter <<" times ";
    return 0;
}
