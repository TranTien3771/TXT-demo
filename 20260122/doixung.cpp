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

int n, f[1005][1005];
string s; 

// bool check(int l, int r){
//     while (l <= r){
//         if (s[l] != s[r]) return false;
//         l++;
//         r--;
//     }
//     return true;
// }

int dp(int i, int j){
    if (j > n || i < 1 || i > j) return 0;
    if (f[i][j] != -1) return f[i][j];
    if (i == j) return f[i][j] = 1;
    else if (s[i] == s[j]) return f[i][j] = dp(i + 1, j - 1) + 2;
    else return f[i][j] = max(dp(i + 1, j), dp(i, j - 1));
}

main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    if (fopen("doixung.INP", "r")){
        freopen("doixung.INP", "r", stdin);
        freopen("doixung.OUT", "w", stdout);
    }

    cin >> n >> s;
    s = " " + s;
    // int kq = 1;
    // for (int i = 1; i < n; i++){
    //     for (int j = i + 1; j <= n; j++){
    //         if (check(i, j)) kq = max(kq, j - i + 1);
    //     }
    // }
    // cout << kq;
    memset(f, -1, sizeof(f));
    cout << dp(1, n);

    return 0;
}

//TranTien