#include <bits/stdc++.h>
using namespace std;


int main() {
    
    vector<int> v;
    int n, even_nums = 0;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int l;
        cin >> l;

        if (l % 2 == 0)
            v.push_back(l);
    }

    for (int i = 0; i < v.size(); ++i) {
        for (int j = 0; j < i + 1; ++j) {
            cout << v[j] << " ";
        }
        cout << "\n";
    }

}
