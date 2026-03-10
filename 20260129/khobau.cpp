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

int n, d, a[maxn], dp[maxn];

main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    if (fopen("khobau.INP", "r")){
        freopen("khobau.INP", "r", stdin);
        freopen("khobau.OUT", "w", stdout);
    }

    cin >> n >> d;
    for (int i = 1; i <= n; i++) cin >> a[i];

    int kq = -inf;
    for (int i = 1; i <= n; i++){
        dp[i] = max(dp[i - 1], a[i]);
        if (i > d){
            dp[i] = max(dp[i - d - 1] + a[i], dp[i]);
        }
        kq = max(kq, dp[i]);
    }
    cout << kq;

    return 0;
}

//TranTien