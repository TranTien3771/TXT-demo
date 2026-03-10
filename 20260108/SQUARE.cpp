#include <bits/stdc++.h>
#define int long long
#define fi first
#define se second
#define lb lower_bound
#define ub upper_bound
#define pii pair<int, int>
#define pb push_back
const int maxn = 2e5 + 5;
const int mod = 1e9 + 7;
const int inf = 1e18;

using namespace std;

int d[maxn];
vector<int> cp;
void pre(){
    for (int i = 1; i * i <= 200000; i++){
        cp.pb(i * i);
        d[i * i] = 1;
    }
}

main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    if (fopen("SQUARE.INP", "r")){
        freopen("SQUARE.INP", "r", stdin);
        freopen("SQUARE.OUT", "w", stdout);
    }
    
    pre();

    int n, k; cin >> n >> k;
    if (k == 2){
        bool check = false;
        for (auto i : cp){
            if (d[n - i]){
                check = true;
                cout << "YES\n" << i << " " << n - i;
                break;
            }
        }
        if (!check) cout << "NO";
    } if (k == 3){
        bool check = false;
        for (int i = 0; cp[i] < n && i < cp.size(); i++){
            for (int j = 0; j <= cp[i]; j++){
                if (d[(n - cp[i]) + j] && d[(n - cp[i]) + (cp[i] - j)]){
                    check = true;
                    cout << "YES\n" << j << " " << cp[i] - j << " " << n - cp[i];
                    break;
                }
            }
            if (check) break;
        }
        if (!check) cout << "NO";
    } else cout << "NO";

    return 0;
}

//TranTien