#include <bits/stdc++.h>
#define int long long

using namespace std;

int a[1000005];

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    if (fopen("exp.inp", "r")) {
        freopen("exp.inp", "r", stdin);
        freopen("exp.out", "w", stdout);    
    }
    
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    
    int f = 0;
    f = a[1];
    sort(a+2, a+n+1, greater<int>());
    
    for (int i = 2; i <= k+1; i++) {
        f += a[i]; 
    }
    for (int i = k+2; i <= n; i++) {
        f -= a[i]; 
    }
    
    cout << f;
    return 0;
}

