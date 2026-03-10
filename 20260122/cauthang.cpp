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

int dp[maxn];

main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    if (fopen("cauthang.INP", "r")){
        freopen("cauthang.INP", "r", stdin);
        freopen("cauthang.OUT", "w", stdout);
    }

    int n; cin >> n;
    dp[0] = 1;
    dp[1] = 1;
    for (int i = 2; i <= n; i++) dp[i] = (dp[i - 1] + dp[i - 2]) % mod;
    cout << dp[n];

    return 0;
}

//TranTien