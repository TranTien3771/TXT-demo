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

int n, a[maxn], dem = 0, d[maxn];

bool cp(int x){
    int cur = sqrt(x);
    return cur * cur == x;
}

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

vector<pii> mp[maxn];
void pt(int x){
    int ans = x;
    for (int i = 0; i < p.size() && p[i] * p[i] <= x; i++){
        int cur = 0;
        while (x % p[i] == 0){
            x /= p[i];
            cur++;
        }
        mp[ans].pb({p[i], cur});
    }
    if (x > 1) mp[ans].pb({x, 1});
}

main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    if (fopen("GAME.INP", "r")){
        freopen("GAME.INP", "r", stdin);
        freopen("GAME.OUT", "w", stdout);
    }

    sieve();

    cin >> n;
    int mx = 0;
    for (int i = 1; i <= n; i++) cin >> a[i], mx = max(mx, a[i]), pt(a[i]);


    if (n <= 18 && mx <= 9){
        int tich = 1, cnt = 0;
        vector<string> kq;
        for (int i = 1; i <= n; i++){
            tich *= a[i];
            if (cp(tich)){
                cnt++;
                kq.pb("YES");
            } else {
                kq.pb("NO");
            }
        }
        cout << cnt << '\n';
        for (auto i : kq) cout << i << " ";
    } else {
        int cnt = 0;
        vector<string> kq;
        for (int i = 1; i <= n; i++){
            for (auto x : mp[a[i]]){
                int truoc = d[x.fi] % 2;
                d[x.fi] += x.se;
                int sau = d[x.fi] % 2;

                if (truoc == 0 && sau == 1) dem++;
                if (truoc == 1 && sau == 0) dem--;
            }
            if (!dem) cnt++, kq.pb("YES");
            else kq.pb("NO");
        }
        cout << cnt << '\n';
        for (auto i : kq) cout << i << " ";
    }

    return 0;
}

//TranTien