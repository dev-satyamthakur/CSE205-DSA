#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int> st;
    int n;
    cin >> n;
    
    for (int i = 0; i < n; ++i) {
        int l;
        cin >> l;
        st.push_back(l);
    }
    
    cout << st[(st.size()-1) / 2] << "\n";
    st.pop_back();
    cout << st[(st.size()-1) / 2] << " ";
    
    return 0;
}
