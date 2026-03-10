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

int a[maxn], d[maxn], mx = 0;
bool isprime[maxn];
vector<int> p;
void sieve(){
    memset(isprime, 1, sizeof(isprime));
    isprime[0] = isprime[1] = false;
    for (int i = 2; i * i <= maxn; i++){
        if (isprime[i]){
            for (int j = i * i; j <= maxn; j += i){
                isprime[j] = false;
            }
        }
    }
    for (int i = 2; i <= maxn; i++){
        if (isprime[i]) p.pb(i);
    }
}

set<int> last;
void pt(int x){
    set<int> cur;
    for (int i = 0; i < (int)p.size() && p[i] * p[i] <= x; i++){
        if (x % p[i] == 0){
            cur.insert(p[i]);
            while (x % p[i] == 0) x /= p[i];
        }
    }
    if (x > 1) cur.insert(x);

    for (int i : last){
        if (!cur.count(i)) d[i] = 0;
    }

    for (int i : cur){
        d[i]++;
        mx = max(mx, d[i]);
    }

    last = cur;
}


main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    if (fopen("CDSUBSEG.INP", "r")){
        freopen("CDSUBSEG.INP", "r", stdin);
        freopen("CDSUBSEG.OUT", "w", stdout);
    }

    sieve();

    int t; cin >> t;
    while (t--){
        mx = 0;
        int n; cin >> n;
        for (int i = 1; i <= n; i++) cin >> a[i]; 
        memset(d, 0, sizeof(d));
        for (int i = 1; i <= n; i++){
            pt(a[i]);
        }
        cout << mx << '\n';
    }

    return 0;
}

//TranTien