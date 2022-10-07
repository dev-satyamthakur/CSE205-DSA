#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    map<int, string> mymap;
    int n;
    cin >> n;
    
    if (!(n >= 5 && n <= 10)) {
        cout << "Invalid Input";
        return 0;
    }
    
    for (int i = 0; i < n; ++i) {
        int k;
        string name;
        cin >> name >> k;
        mymap[k] = name;
    }
    
    for (auto i = mymap.rbegin(); i != mymap.rend(); ++i) {
        cout << i->second << " ";
    }

    cout << "\n";

    int mscore;
    string mname;
    cin >> mname >> mscore;

    mymap[mscore] = mname;

    for (auto i = mymap.rbegin(); i != mymap.rend(); ++i) {
        cout << i->second << " ";
    }
    
    return 0;
}
