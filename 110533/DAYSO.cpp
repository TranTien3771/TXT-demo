#include <bits/stdc++.h>
#define int long long
#define fi first
#define se second
#define lb lower_bound
#define ub upper_bound
#define pii pair<int, int>
const int maxn = 1e5 + 5;
const int mod = 1e9 + 7;

using namespace std;

int n, q, a[maxn], st[4 * maxn];

void build(int id, int l, int r){
    if (l == r){
        st[id] = a[l];
        return;
    }
    int m = (l + r) >> 1;
    build(2 * id, l, m);
    build(2 * id + 1, m + 1, r);
    st[id] = st[2 * id] + st[2 * id + 1];
}

void update(int id, int l, int r, int pos, int val){
    if (l > pos || r < pos) return;
    if (l == r){
        st[id] = val;
        return;
    }
    int m = (l + r) >> 1;
    update(2 * id, l, m, pos, val);
    update(2 * id + 1, m + 1, r, pos, val);
    st[id] = st[2 * id] + st[2 * id + 1];
}

main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    if (fopen("DAYSO.INP", "r")){
        freopen("DAYSO.INP", "r", stdin);
        freopen("DAYSO.OUT", "w", stdout);
    }

    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    build(1, 1, n);

    cin >> q;
    int cnt = 0;
    int cur = 0;
    while (q--){
        int t; cin >> t;
        if (t == 1){
            int i, x; cin >> i >> x;
            update(1, 1, n, n * cur + i - cnt, x);
            // cnt = 0;
            cout << st[1] << '\n';
        } else {
            int k; cin >> k;
            cnt += k;
            cur = (n + cnt) / n;
        }
    }

    return 0;
}

//TranTien