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

int n, a[maxn], f[maxn], res = 0;

int solve(int l, int r){
    int sum = f[r] + f[l - 1];
    if (sum % 2) return 0;
    sum /= 2;
    int m = lb(f + l, f + r + 1, sum) - f;
    if (f[m] - f[l - 1] == f[r] - f[m]) return res = max(solve(l, m), solve(m + 1, r)) + 1;
    else return 0;
}

main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    if (fopen("SEQ10.INP", "r")){
        freopen("SEQ10.INP", "r", stdin);
        freopen("SEQ10.OUT", "w", stdout);
    }

    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i], f[i] = f[i - 1] + a[i];
    cout << solve(1, n);

    return 0;
}

//TranTien