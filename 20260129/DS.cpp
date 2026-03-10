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

int n, c, a[maxn];

main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    if (fopen("DS.INP", "r")){
        freopen("DS.INP", "r", stdin);
        freopen("DS.OUT", "w", stdout);
    }

    cin >> n >> c;
    int sum = 0;
    for (int i = 1; i <= n; i++){
        int x; cin >> x;
        sum += x;
        if (sum >= c){
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";

    return 0;
}

//TranTien