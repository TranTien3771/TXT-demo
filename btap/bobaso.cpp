#include <bits/stdc++.h>
using namespace std;

vector<bool> snt(int n) {
    vector<bool> check(n + 1, true);
    check[0] = check[1] = false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (check[i]) {
            for (int j = i * i; j <= n; j += i) {
                check[j] = false;
            }
        }
    }
    return check;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    if (fopen("BOBASO.INP", "r")) {
        freopen("BOBASO.INP", "r", stdin);
        freopen("BOBASO.OUT", "w", stdout);
    }
    
    int n; 
    cin >> n;
    

    vector<bool> nt = snt(n);
    int cnt = 0;
    int m = n / 3;

    for (int x = 2; x <= m; x++) {
        if (!nt[x]) continue; 
        for (int y = x; y <= n - x; y++) {
            if (nt[y]) {
                int z = n - x - y;
                if (z >= y && nt[z]) {
                    cnt++;
                }
            }
        }
    }
    
    cout << cnt;
    return 0;
}

