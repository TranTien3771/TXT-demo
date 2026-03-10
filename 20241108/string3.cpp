#include <bits/stdc++.h>

using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    if (fopen("string3.INP", "r")){
        freopen("string3.INP", "r", stdin);
        freopen("string3.OUT", "w", stdout);
    }
    
    string s; getline(cin, s);
    for (int i = 0; i < s.size(); i++){
    	if (s[i] == ' '){
    		cout << i;
    		break;
		}
	}
	
    
    return 0;
}

