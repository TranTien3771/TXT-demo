#include <bits/stdc++.h>
#define int long long
#define fi first
#define se second
#define lb lower_bound
#define ub upper_bound
#define pii pair<int, int>
const int maxn = 1e6 + 5;
const int mod = 1e9 + 7;

using namespace std;

main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    if (fopen("BANHKEM.INP", "r")){
        freopen("BANHKEM.INP", "r", stdin);
        freopen("BANHKEM.OUT", "w", stdout);
    }

    double r, a, b; cin >> r >> a >> b;
    if (max(a, b) < 2 * r && a * a + b * b <= 4 * r * r) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}

//TranTien