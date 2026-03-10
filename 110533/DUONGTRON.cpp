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

main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    if (fopen("DUONGTRON.INP", "r")){
        freopen("DUONGTRON.INP", "r", stdin);
        freopen("DUONGTRON.OUT", "w", stdout);
    }

    int n, d, k; cin >> n >> d >> k;
    int sum = 1, cur = 1;
    for (int i = 1; i <= k; i++){
        cur = (cur + d) % n + n * ((cur + d) % n == 0);
        sum += cur;
    }
    cout << sum;

    return 0;
}

//TranTien