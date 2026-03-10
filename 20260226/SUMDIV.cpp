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

    if (fopen("SUMDIV.INP", "r")){
        freopen("SUMDIV.INP", "r", stdin);
        freopen("SUMDIV.OUT", "w", stdout);
    }

    int n; cin >> n;
    int res = 0;
    for (int i = 1; i <= n / 2; i++) res += (n / i);
    res += (n % 2) * (n / 2 + 1) + (n % 2 == 0) * (n / 2);
    cout << res;

    return 0;
}

//TranTien