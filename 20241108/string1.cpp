#include <bits/stdc++.h>

using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    if (fopen("string1.INP", "r")){
        freopen("string1.INP", "r", stdin);
        freopen("string1.OUT", "w", stdout);
    }
    
    string s; cin >> s;
    reverse(s.begin(), s.end());
    cout << s;
	
	
    
    return 0;
}

