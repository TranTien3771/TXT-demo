#include <bits/stdc++.h>
#define int long long

using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    if (fopen("TBC.INP", "r")){
        freopen("TBC.INP", "r", stdin);
        freopen("TBC.OUT", "w", stdout);
    }
    
    int n; cin >> n;
    int b[n+5];
    for (int i = 1; i <= n; i++){
    	cin >> b[i];
    	
    	cout << b[i] * i - b[i - 1] * (i - 1) << " ";
	}
	
	
    
    return 0;
}

