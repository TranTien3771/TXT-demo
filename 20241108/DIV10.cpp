#include <bits/stdc++.h>
#define int long long

using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    if (fopen("DIV10.INP", "r")){
        freopen("DIV10.INP", "r", stdin);
        freopen("DIV10.OUT", "w", stdout);
    }
    
    string n; cin >> n;
    int k = n.size();
    int res = n[k-1] - '0';
    for (int i = 1; i <= 10; i++){
    	if (res * i % 10 == 0){
    		cout << i;
    		break;
		}
	}

    return 0;
}

