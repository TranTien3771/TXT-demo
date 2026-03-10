#include <bits/stdc++.h>
#define int long long
#define fi first
#define se second
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define pii pair<int, int>
const int maxn = 1e6 + 5;
const int mod = 1e9 + 7;

using namespace std;

int n, l, r;
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
    for (int i = 1; i <= maxn; i++){
        if (i > n) break;
        if (isprime[i] && n % i == 0) p.pb(i);
    }
}

vector<int> kq;

main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    if (fopen("KTDONG.INP", "r")){
        freopen("KTDONG.INP", "r", stdin);
        freopen("KTDONG.OUT", "w", stdout);
    }

    cin >> n >> l >> r;
    sieve();

    // for (int m = l; m <= r; m++){
    //     if (m == n) continue;
    //     int cnt = 0;
    //     for (int i = 2; i <= min(m, n); i++){
    //         if (m % i == 0 && n % i == 0) cnt++;
    //     }
    //     if (cnt <= 1) kq.pb(m);
    // }

    for (int m = l; m <= r; m++){
        if (m == n) continue;
        int cnt = 0;
        for (auto i : p){
            if (i > m) break;
            if (m % i == 0) cnt++;
            if (cnt >= 2) break;
        }
        if (cnt < 2) kq.pb(m);
    }

    cout << kq.size() << '\n';
    for (auto i : kq) cout << i << " ";

    return 0;
}

//TranTien