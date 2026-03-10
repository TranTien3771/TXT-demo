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

int n, m, a[maxn], f[maxn], s[maxn];

int nhan(int a, int b){
    if (b == 0) return 0;
    int t = nhan(a, b / 2);
    t = (t + t) % m;
    if (b % 2) t = (t + a) % m;
    return t % m;
}

main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    if (fopen("HP.INP", "r")){
        freopen("HP.INP", "r", stdin);
        freopen("HP.OUT", "w", stdout);
    }

    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> a[i], s[i] = s[i - 1] + a[i];
    for (int i = n; i >= 1; i--) f[i] = f[i + 1] + a[i];

    int kq = 0;
    for (int i = 1; i <= n; i++){
        kq = (kq + nhan(nhan(s[i - 1], a[i]), f[i + 1])) % m;
    }
    cout << kq;

    return 0;
}

//TranTien