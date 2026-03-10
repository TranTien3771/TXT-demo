#include <bits/stdc++.h>
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    if (fopen("PER30.INP", "r")) {
        freopen("PER30.INP", "r", stdin);
        freopen("PER30.OUT", "w", stdout);
    }
    
    string n;
    cin >> n;
    
    int sum = 0;
    bool check0 = false;
    
    for (char c : n) {
        sum += (c - '0');
        if (c == '0') check0 = true;
    }
    
    if (sum % 3 != 0 || !check0) {
        cout << -1;
    } else {
        sort(n.begin(), n.end(), greater<int>());
        cout << n;
    }
    
    return 0;
}
