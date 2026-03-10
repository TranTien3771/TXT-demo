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

int n, a[maxn], p, f[maxn];
map<int, int> mp;
set<int> s;

main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    if (fopen("DANCU.INP", "r")){
        freopen("DANCU.INP", "r", stdin);
        freopen("DANCU.OUT", "w", stdout);
    }

    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        f[i] = f[i - 1] + a[i];
    }
    cin >> p;

    int cnt = 0;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            if (f[i] - f[j - 1] >= (i - j + 1) * p) cnt++;
        }
    }
    cout << cnt;

    return 0;
}

//TranTien