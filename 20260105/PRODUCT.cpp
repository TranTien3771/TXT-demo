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

int n, a[maxn];

main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    if (fopen("PRODUCT.INP", "r")){
        freopen("PRODUCT.INP", "r", stdin);
        freopen("PRODUCT.OUT", "w", stdout);
    }

    cin >> n;
    int cnt = 0, sum = 0;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        if (a[i] < 0) cnt++;
        sum += min(abs(a[i] - (-1)), abs(a[i] - 1));
    }
    if (cnt % 2) sum += 2;
    cout << sum;

    return 0;
}

//TranTien