#include <bits/stdc++.h>
#define int long long

using namespace std;

void th(int m, int n) {
    unordered_map<int, int> du;
    int x = m % n * 10;
    string result;

    while (x != 0) {
        if (du.find(x) != du.end()) {
            result.insert(du[x], "(");
            result += ")"; 
            break;
        }
        du[x] = result.size();
        result += to_string(x / n);
        x = (x % n) * 10;
    }
    
    cout << result;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int m, n; 
    cin >> m >> n;
    cout << m / n;
    if (m % n != 0) {
        cout << ",";
        th(m, n);
    }
    
    return 0;
}

