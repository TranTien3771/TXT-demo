#include <bits/stdc++.h>
#define fi first
#define se second
#define lb lower_bound
#define ub upper_bound
#define pii pair<int, int>
const int maxn = 1e6 + 5;
const int mod = 1e9 + 7;

using namespace std;

int n, a[maxn];

main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    if (fopen("SOMAX.INP", "r")){
        freopen("SOMAX.INP", "r", stdin);
        freopen("SOMAX.OUT", "w", stdout);
    }

    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];

    for (int i = 1; i <= n; i++){
        bool check = false;
        for (int j = i + 1; j <= n; j++){
            if (a[j] > a[i]){
                cout << a[j] << " ";
                check = true;
                break;
            }
        }
        if (!check) cout << -1 << " ";
    }

    return 0;
}

//TranTien