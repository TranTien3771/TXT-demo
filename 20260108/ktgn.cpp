#include <bits/stdc++.h>
#define int long long
#define fi first
#define se second
#define lb lower_bound
#define ub upper_bound
#define pii pair<int, int>
#define pb push_back
const int maxn = 1e6 + 5;
const int mod = 1e9 + 7;
const int inf = 1e18;

using namespace std;

main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    if (fopen("ktgn.INP", "r")){
        freopen("ktgn.INP", "r", stdin);
        freopen("ktgn.OUT", "w", stdout);
    }

    string a, b; cin >> a >> b;
    string c = b;
    reverse(b.begin(), b.end());
    c = " " + c;
    a = " " + a;
    b = " " + b;
    int q; cin >> q;
    while (q--){
        int u, v; cin >> u >> v;
        if (u == 1){
            if (a[v] == c[v]) cout << "YES\n";
            else cout << "NO\n";
        } else {
            if (a[v] == b[v]) cout << "YES\n";
            else cout << "NO\n";
        }
    }

    return 0;
}

//TranTien