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

int n, a[maxn], f[maxn], dp[105][10005];

main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    if (fopen("doidau.INP", "r")){
        freopen("doidau.INP", "r", stdin);
        freopen("doidau.OUT", "w", stdout);
    }

    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        f[i] = f[i - 1] + a[i];
    }

    dp[0][0] = 1;
    for (int i = 1; i <= n; i++){
        for (int j = 0; j <= 10000; j++){
            dp[i][j] = (j >= a[i] && dp[i - 1][j - a[i]]) || dp[i - 1][j];
        }
    }

    int kq = inf;
    for (int i = 0; i <= 10000; i++){
        if (dp[n][i]) kq = min(kq, abs(f[n] - 2 * i));
    }
    cout << kq;

    return 0;
}

//TranTien