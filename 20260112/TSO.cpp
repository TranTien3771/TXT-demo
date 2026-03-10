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

vector<int> so;

main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    if (fopen("TSO.INP", "r")){
        freopen("TSO.INP", "r", stdin);
        freopen("TSO.OUT", "w", stdout);
    }

    string p, s; cin >> p >> s;
    int n = p.size();
    p = ' ' + p;
    map<int, int> mp;
    for (auto i : s){
        mp[i - '0'] = 1;
    }

    for (int i = 1; i <= 9; i++){
        if (!mp.count(i)) so.pb(i);
    }
    if (so.empty()){
        cout << -1;
        return 0;
    }

    bool check = true;
    string kq = "";
    for (int i = 1; i <= n; i++){
        if (check){
            int it = ub(so.begin(), so.end(), (p[i] - '0')) - so.begin() - 1;
            if (it < 0){
                cout << -1;
                return 0;
            }
            if (so[it] < (p[i] - '0')){
                kq += (so[it] + '0');
                check = false;
            } else if (so[it] == (p[i] - '0')){
                kq += (so[it] + '0');
            }
        } else {
            kq += (so[so.size() - 1] + '0');
        }
        // cout << kq << '\n';
    }

    cout << kq;


    return 0;
}

//TranTien